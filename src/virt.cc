#include <iostream>
#include <string>

using namespace std;

//Class entity has one public method
//GetName which returns a string entity
class Entity{
    public:
        string GetName() {return "Entity";}
};

//Class Player inherits Entity class and has one private 
//One public method which returns pointer to string
// name
class Player : public Entity
{
    private:
        string m_Name;
    public:
        Player(const string& name) : m_Name(name) {}
        string GetName() {return m_Name;}
};

//Printname function calls getname through the pointer 
//object of entity
void PrintName(Entity* entity)
{
    cout << entity->GetName() << endl;
}

int main()
{
    //Here we create the object
    Entity* e = new Entity();

    //We call the printname function using e
    PrintName(e);
    cout << e->GetName() << endl;

    //Here we create an object for Player and pass 
    //Shrinish as a string
    Player* p = new Player("Shrinish");
    cout << p->GetName() << endl;

    //Pass Donde as a string
    Player* p1 = new Player("Donde");
    cout << p1->GetName() << endl;
    }