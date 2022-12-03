#include <iostream>
#include<vector>
#include<string>
#include"Stack.hpp"
using namespace std;

int main()
{
    int size = 10;
    Stack <double> s(size);
    for (int i = 0; i < 5; ++i)
    {
        s.push(i);
    }
    s.getStack();
    s.pop();
    cout << endl;
    s.getStack();
}

