#include <iostream>

using namespace std;

class Enemy{
    protected:
        int attackpower;
    public:
        void setattackpower(int a) {
            attackpower = a;
        }
};

class Ninja: public Enemy{
    public: 
        void attack(){
            cout << "I am a ninja chop != - " << attackpower << endl;
        }
};

class Monster:public Enemy{
    public:
        void attack(){
            cout << "Monster eats you ! " << attackpower << endl;
        }
};

int main(){

    Ninja n;
    Monster m;
    Enemy *enemy1 = &n;
    Enemy *enemy2 = &m;

    enemy1->setattackpower(10);
    enemy2->setattackpower(20); 

    n.attack();
    m.attack();

    return 0;

}