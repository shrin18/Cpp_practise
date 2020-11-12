#include <iostream>

using namespace std;

int main(){
    try{
        int momsAge = 24;
        int sonsAge = 52;

        if(sonsAge > momsAge){
            throw 99;
        }
    }
    catch(int x){
        cout << " Son cannot be older than Mom, ERROR NUMBER " << x << endl; 
    }

    try{
        int num1;
        cout << " Enter the first  number: " << endl;
        cin >> num1;

        
        int num2;
        cout << " Enter the second number: " << endl;
        cin >> num2;
        
        if (num2 == 0){
            throw 0;
        }
        cout << num1/num2 << endl;
    }
   
    catch(...){
        cout << " Error occured.., " <<  endl;
    }
}