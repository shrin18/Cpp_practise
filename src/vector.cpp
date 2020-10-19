#include <iostream>
#include <vector>
#include <sets>

using namespace std;
//vector
int main()
{
    vector<int> v;
    cout << v.size() << endl;
    v.push_back(20);
    v.push_back(12);

    v.pop_back();
    v.pop_back();
    v.pop_back();
    
    cout << v[1] << endl;
    cout << v.size() << endl;

//set
    set<int> s;
    cout << s.size() << endl;
    s.insert(20);
    s