#include <iostream>
#include <algorithm>

using namespace std;

void swap(int *xp, int *yp){
    int temp = *xp;
    *xp = *yp;
    *yp = temp;
}

void bubblesort(int arr[], int n)
{
    int i,j;
    for(i=0; i<n-1; i++)
    {
        for(j=0; j<n-1-i; j++)
        {
            if(arr[j]>arr[j+1])
            {
                swap(&arr[j],&arr[j+1]);
            }
        }
    }
}

void printarray(int arr[], int size){
    int i;
    for (i=0;i<size;i++)
    {
        cout << arr[i] << '\t' ;
    }
}

int main(){
    int arr[] = {1,23,43,21,342,122,1};
    int n = sizeof(arr)/sizeof(arr[0]);
    bubblesort(arr,n);

    cout << "Sorted array is as follows:" << endl;
    printarray(arr,n);
}