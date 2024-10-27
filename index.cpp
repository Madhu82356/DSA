#include <iostream>
using namespace std;
int main (){
    int arr[]={1,2,3,4,5};
    int sz=5,key=2,ans=-1;
    for(int i=0; i<sz; i++){
        if(arr[i]==key) {
            ans=i;
            }
    
    }
    cout<<ans;
    return 0;
}
