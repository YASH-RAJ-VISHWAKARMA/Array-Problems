#include<iostream>
using namespace std;

int main(){
    int arr[]={1,2,3,4,5,6};
    int ans[6];
    int k=2;
    
    for(int i=0;i<6;i++){
        ans[(i+k)%6]=arr[i];
    }

    for(int i=0;i<6;i++){
        cout<<ans[i];
    }
    
    return 0;
}