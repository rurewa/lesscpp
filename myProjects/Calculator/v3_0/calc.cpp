#include <cstdlib>
#include <stdexcept>

enum class Token
{
    Invalid,
    Number,
    Minus,
    Plus,
    Mul,
    Div,
    End
};

Token getToken(const char*& ptr)
{
    while (const auto c = *ptr)
    {
        ++ptr;

        if (c == ' ')
            continue; // Прыжок из цикла

        switch (c)
        {
        case ' ':
            continue; // Прыжок из цикла
        case '-':
            return Token::Minus;
        case '+':
            return Token::Plus;
        case '*':
            return Token::Mul;
        case '/':
            return Token::Div;
        }

        if (c >= '0' && c <= '9')
        {
            for (auto c = *ptr; c >= '0' && c <= '9'; c = *++ptr)
            {
                // skip digits
            }
            return Token::Number;
        }

        return Token::Invalid;
    }

    return Token::End;
}

struct Context
{
    int result;
    Token token;
};

Context prim(const char*& text)
{
    auto prev = text;

    const auto token = getToken(text);
    if (token == Token::End)
        return { 0, Token::End };

    if (token == Token::Number)
    {
        return { std::atoi(prev), getToken(text) };
    }
    else if (token == Token::Minus)
    {
        const auto context = prim(text);
        return { -context.result, context.token };
    }

    throw std::runtime_error("unexpected token");
}

Context term(const char*& text)
{
    auto context = prim(text);
    auto result = context.result;

    while (true)
    {
        if (context.token == Token::Mul)
        {
            context = prim(text);
            result *= context.result;
        }
        else if (context.token == Token::Div)
        {
            context = prim(text);

            if (context.result == 0)
                throw std::runtime_error("division by zero");

            result /= context.result;
        }
        else
        {
            return { result, context.token };
        }
    }
}

Context expr(const char*& text)
{
    auto context = term(text);
    auto result = context.result;

    while (true)
    {
        if (context.token == Token::Minus)
        {
            context = term(text);
            result -= context.result;
        }
        else if (context.token == Token::Plus)
        {
            context = term(text);
            result += context.result;
        }
        else
        {
            return { result, context.token };
        }
    }
}

int calc(const char* text)
{
    const auto context = expr(text);
    if (context.token == Token::Invalid)
        throw std::runtime_error("unexpected token");
    return context.result;
}

