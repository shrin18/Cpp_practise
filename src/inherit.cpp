#include <iostream>
#include <bits/stdc++.h>

using namespace std;
class Parent
{
    public: 
        int id_p; 
};

class child : public Parent
{
    public:
        int id_c;
};

int main()
{
    child c1;
    c1.id_c = 7;
    c1.id_p = 8;
    
    cout << c1.id_p << endl;
    cout << c1.id_c << endl;
}