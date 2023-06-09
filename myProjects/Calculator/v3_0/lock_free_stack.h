#pragma once

#include <atomic>

template <class T>
class LockFreeStack
{
    struct Node
    {
        T val_;
        Node* next_;
    };

    std::atomic<Node*> head_ = nullptr;

public:
    void push(const T& val)
    {
        auto newNode = new Node { val, head_.load() };
        while (!head_.compare_exchange_weak(newNode->next_, newNode)) ;
    }

    bool pop(T& val)
    {
        auto node = head_.load();
        while (node != nullptr
            && !head_.compare_exchange_weak(node, node->next_)) ;
        if (node == nullptr)
        {
            return false;
        }
        val = node->val_;
        return true;
    }
};
