#include <iostream>
#include <array>

using namespace std;

void selectionsort(int arr[], int n){
    int i, j, temp, small;
    for(i = 0; i < n-1; i++)
    {
        small = i;
        for(j = i+1; j < n; j++)
        {
            if (arr[j] < arr[small])
            {
                small = j;
            }
            //swap 
            temp = arr[i];
            arr[i] = arr[small];
            arr[small] = temp;
        }
    }
}

void printarray(int arr[], int n)
{
    for(int i=0; i<n-1; i++)
    {
        cout << arr[i] << '\t';
    }
}

int main(){
    int arr[] = {1,223,21,3,45,666,443,56,3};
    int n = (sizeof(arr)/sizeof(arr[0]));
    
    selectionsort(arr,n);
    cout << "Sorted array is as follows:" << endl;
    printarray(arr,n);

}