#include <iostream>
#include <algorithm>
#include <queue>

using namespace std;

void printKmax(int arr[], int n, int k){
    deque<int> q;
    for(int i=0; i<n; i++)
    {
        for(;!q.empty() && arr[i]>q.back();)
        q.pop_back();

        q.push_back(arr[i]);
        if(i>=k && q.front()==arr[i-k])
            q.pop_front();
        if(i>=k-1)
            printf(i<n-1 ? "%d ":"%d\n", q.front());
    }
}

int main(){
    int t;
    cin >> t;
    int n,k;


    while(t>0)
    {
        cin >> n >> k;
        int i;
        int arr[n];

        for(i=0; i<n; i++)
            cin >> arr[i];
        printKmax(arr,n,k);
        t--;
    }
    return 0;
}