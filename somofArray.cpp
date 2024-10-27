#include<iostream>
using namespace std;
void sumofArray(int arr[], int sz){
    int sum=0;
    for(int i=0; i<sz; i++){
        sum+=arr[i];
    }
    cout<<sum;
}

int main(){
    int arr[]= {12,15,16};
    int sz=3;
    sumofArray(arr, sz);
    return 0;
}