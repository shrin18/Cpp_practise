#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main(){

    ofstream outFile;
    outFile.open("sample.txt");

    outFile << " Hello guys ! Howdy ?" << endl;
    outFile << " Second number" << 5 <<  endl;

    outFile.close();
    ifstream inFile;
    inFile.open("list.txt");

    //Check for error
    if (inFile.fail()){
        cerr << " Error opening file" << endl;
        exit(1);
    }

    int x,y;
    string item;
    int count = 0;

    while(!inFile.eof()){
        inFile >> item;
        count++;
    }

    cout << " Itme sfound !" << count << endl;
    inFile.close();

    //Read the file until you reached the end
   // inFile >> x >> y;

    //cout << "Num 1 is : " << x << endl;
    //cout << "Num 2 is : " << y << endl;

    return 0;


}