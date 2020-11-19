#include <iostream>
#include <string>

using namespace std;

struct vector3{
    float x,y,z;
};

double multipleByTwo (double input){
    double twice = input * 2.0;
    return twice;
}

int main(int argc, char *argv[]){

    int age = 33;
    double salary = 1331212.89;
    double mylist[3] = {112,344,456};


    printf("double your salary is %.3f\n", multipleByTwo(salary));
    
    int value =4;
    int array[7];

    array[0] = 1;
    array[1] = 1;
    array[2] = 1;
    array[3] = 1;
    array[4] = 1;
    array[5] = 1;
    array[6] = 1;

    vector3 vector;

    int *hvalue = new int;
    *hvalue = 5;
    int *harray = new int[5];
    vector3* hvector = new vector3();

    harray[0] = 1;
    harray[1] = 1;
    harray[2] = 1;
    harray[3] = 1;
    harray[4] = 1;
    harray[5] = 1;
    harray[6] = 1;

    delete hvalue;
    delete[] harray;
    delete hvector;

    cin.get();
}
