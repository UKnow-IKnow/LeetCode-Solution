// simple logic

#include<bits/stdc++.h>
using namespace std;


void BubbleSort(int arr[],int n){
    int temp;
    for(int i = 0; i<n-1;i++){
        for(int j = 0;j<n-1;j++){
            if(arr[j]>arr[j+1]){
                temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
}
void printArray(int arr[], int size)
{
    int i;
    for (i = 0; i < size; i++)
        cout <<" "<< arr[i];
}

int main(){
    int n,result;
    cin>>n;
    int arr[n];
    for(auto i = 0 ; i<n ; i++){
        cin>>arr[i];
    }
    cout<<"Before Sorting: \n";
    printArray(arr, n);
    BubbleSort(arr, n);
    cout<<"\n After Sorted: \n";
    printArray(arr, n);
    return 0;
}