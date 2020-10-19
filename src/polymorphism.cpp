#include <iostream>
#include <bits/stdc++.h>

using namespace std;
class geeks{
    public:
    void func(int x)
    {
        cout << "value of x is " << x << endl;
    }
    void func(double x)
    {
        cout << "value of x is " << x << endl;
    }
    void func(int x, int y)
    {
        cout << "Value of x is " << x << " value of y is " << y << endl;
    }
};

int main()
{
    geeks g1;
    g1.func(5);
    g1.func(6.98);
    g1.func(4,5);
}