#include <iostream>
#include <vector>
#include <algorithm>
#include <set>
#include <map>
#include <cstring>

using namespace std;

class Entity{
    public:
        int x, y1;

    void function()
    {
        cout << "this is a print statement" << endl;
    }
};


class Singleton
{
    private: 
        static Singleton* s_instance;
    public:
        static Singleton& Get() {return *s_instance;}
};

Singleton* Singleton::s_instance = nullptr;

struct entity{
    static int x,y;

};

int entity::x;
int entity::y;


using namespace std;
bool f(int x, int y)
{
    return x>y;
}

void mapdemo()
{
    map <int , int> A;
    A[1] = 100;
    A[2] = -1;
    A[3] = 200;

    A[10203831] = 1;

    map<char, int> count;
    string x = "Shrinish Donde";

    for (char c:x)
    {
        count[c]++;
    }

    cout << count['a'] << " " << count['z'] << endl;
}

void setDemo()
{
    set<int> S;
    S.insert(-1);
    S.insert(-10);
    S.insert(10);
    S.insert(2);

    for (int x : S)
        cout << x << " ";
    cout << endl;

      auto it = S.find(-10);
    if (it == S.end())
    {
        cout << "not present\n";
    }
    else
    {
        cout << "present";
        cout << *it << endl;
    }

    auto it4 = S.upper_bound(2);
    if (it4 == S.end())
    {
        cout << "Oops cannot find something like that !";
    }

    auto it2 = S.lower_bound(-1);
    
}

void increment(int& value)
{
    value++;
}



int main()
{
    char* buffer = new char[8];
    memset(buffer,0,8);

    char** ptr = &buffer;

    cout << buffer << endl;
    cout << ptr << endl;

    int a = 5;
    int b = 8;


    int& ref = a;
    
    increment(a);

    cout << a << endl;
    cout << b << endl;


    setDemo();
    mapdemo();
    vector<int> A = {1,2,31,41,5,1};
    cout << A[1] << endl;

    sort(A.begin(), A.end()); //NLogn

    entity e;
    e.x = 2;
    e.y = 3;

    //entity e1 = {6};

    bool present = binary_search(A.begin(), A.end(), 3);
    
    present = binary_search(A.begin(), A.end(), 4);

    A.push_back(100);
    A.push_back(100);
    A.push_back(100);
    A.push_back(123);

    present = binary_search(A.begin(), A.end(), 100);

    cout << present << endl;

    vector<int>::iterator it = lower_bound(A.begin(), A.begin(), 100);


    vector<int>::iterator it2 = upper_bound(A.begin(), A.begin(), 100);

    cout << *it << endl;
    cout << *it2 << endl;

    cout << it2 - it << endl;

    vector<int>::iterator it3;

    for (int &x: A)
    {
        x++;
    }

    for (int x : A)
    {
        cout << x << endl;
    }

    for (it3 = A.begin(); it3 != A.end(); it3++)
    {
        cout << *it3 << " ";
    }


  

    cout << endl;



}