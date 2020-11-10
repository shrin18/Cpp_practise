#include <iostream>

using namespace std;

template <typename T> 
T GetMax (T x, T y)
{
    return (x > y) ? x : y;
}

int main(){
    cout << GetMax<int> (4,5) << endl;
    cout << GetMax<double>(6.9, 9.8) << endl;
    cout << GetMax<char>('g', 'f') << endl;

}