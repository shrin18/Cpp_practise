#include <iostream>

using namespace std;
class Base
{
   public:
   //virtual function will be resolved at runtime
    virtual void print()
    {
        cout << "print base class" << endl;
    } 

    void show(){cout << "show base class" << endl;}
};

class derived:public Base
{
    public:
        void print()
        {cout << "print derived class" << endl;}

        void show()
        {cout << "show derived class" << endl;}
};

int main()
{
    Base *b;
    derived d;
    b = &d;

    b->print();
    b->show();

}