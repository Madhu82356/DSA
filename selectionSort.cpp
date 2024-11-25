#include<iostream>
using namespace std;
void selectionSort(int arr[],int n){
    int smallestIndex=0;
    for (int i = 0; i < n; i++)
    {
        for (int j = i+1; j < n; j++)
        {
            if(arr[j]<arr[smallestIndex]){
                smallestIndex=j;
            }
        }
      swap(arr[i], arr[smallestIndex]);  
    }
    
}

void printArray(int arr[], int n){
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}
int main(){
    int arr[]={4,1,5,3,2};
    int n=5;
    printArray(arr,n);
    selectionSort(arr, n);
    printArray(arr,n);
    return 0;
}