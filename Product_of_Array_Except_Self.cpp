#include<iostream>
using namespace std;

int main(){

    int arr[]={1,2,3,4};
    int ans[4]={0,0,0,0};

    for(int i=0;i<4;i++){
        int prod=1;

        for(int j=0;j<4;j++){
            if(arr[i]==arr[j]){
                continue;
            }
            else{
                prod = prod*arr[j];
            }
        }
        ans[i]=prod;
    }

    for(int i=0;i<4;i++){
        cout<<ans[i]<<endl;
    }
}