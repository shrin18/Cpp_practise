#include <iostream>
#include <queue>

using namespace std;

void showq(queue <int> gq)
{
    queue <int> g = gq;
    while (!g.empty())
    {
        cout << '\t' << g.front();
        g.pop();
    }
    cout << '\n';
}

int main(){
    queue<int> gquiz;

    gquiz.push(20);
    gquiz.push(14);

    cout << "The queue numbers are  :" ;
    showq(gquiz);

    cout << "\nQueue number at front is " << gquiz.front();
    cout << "\nQueue number at back is " << gquiz.back();
    cout << "\nQueue size is " << gquiz.size();

    cout << "\n Pop a number";
    gquiz.pop();
    showq(gquiz);

    cout << "\n Count using iterators" ;
    for(auto i = gquiz.front(); i!=gquiz.back();i++)
    {
        cout << i << " ";
    }
    return 0;

}

