#include <iostream>
#include <string>
#include <vector>
#include <array>

#define SIZE 5

using namespace std;

class Entity{
    private:
        string m_Name;
        int m_Age;
    public:
        Entity(const string& name)
            : m_Name(name), m_Age(-1) {}
        Entity(int age) 
            : m_Name("Unknown"), m_Age(age) {}
        };

void Function()
{
    Entity entity = Entity("Shrinish");
}

void PrintEntity(const Entity& entity)
{
    //print
}

int main(){

    int array[5];

    int size = 6;
    int * heaparray = new int [size];
    delete[] heaparray;

    std::array<int, 10> collection;
    
    for(int i=0; i<collection.size(); i++)
    {
        cout << i << endl;
    }

    int num, temp, k = 1, j, r;

    char hex[50];
    cout << "Enter a decimal number";

    cin >> num;
    temp = num;

    while (temp!=0)
    {
        r = temp%16;
        if (r < 10)
            hex[k++] = r + 48;
        else
            hex[k++] = r + 55;
        temp = temp/16;
    }

    cout << "Hexadecimal equivalent of " << num << "is" ;
    for(j=1; j>0;j--)
    {
        cout << hex[j];
    } 

    Entity b = 22;
    double value = 5.65;
    double a = (int)value + value;
  
    //Static casting 
    //Entity* entity = new Entity();

    cout << a << endl;

    vector<std::string> vector;
    vector.push_back("Shrinish");
    vector.pop_back();

    cout << &vector << endl;


    PrintEntity(Entity("Shrinish"));
    Entity *e;
    {
        Entity entity("Cherno");
        e = &entity;
    }
    Entity entity = Entity("Shrinish");
  

    cin.get();
}