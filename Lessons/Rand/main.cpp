
#include <iostream>
#include <random>
using namespace std;
int main()
{
    while(true)
    {
    random_device rd;
    mt19937 gen(rd());
    uniform_int_distribution<> dist(3, 6);
    cout << dist(gen) << endl;
    }
    return 0;
}