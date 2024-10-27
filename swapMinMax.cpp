#include<iostream>
#include<climits>
using namespace std;
void swapMinMax(int arr[], int sz){
    int smallest= INT_MAX;
    int largest= INT_MIN;
    for(int i=0; i<sz; i++){
        smallest= min(arr[i], smallest);
        largest= max(arr[i], largest);
    }
    swap(smallest, largest);
cout<<

}

int main(){
    int arr[]= {12,15,16};
    int sz=3;
    swapMinMax(arr, sz);
    for(int i=0; i<sz; i++){
        cout<<arr[i]<<" ";

    }
    return 0;
}