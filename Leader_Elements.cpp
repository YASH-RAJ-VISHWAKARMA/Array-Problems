#include<iostream>
using namespace std;

int main(){

    int arr[]={16,17,4,3,5,2};
    int maxi = -1;

    for(int i=5;i>=0;i--){
        if(arr[i]>maxi){
            cout<<arr[i]<<" ";
            maxi = arr[i];
        }
    }

    return 0;
}