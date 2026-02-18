#include<iostream>
using namespace std;

int main(){

    int arr[]={1,2,3,4,5};
    int k=3;

    int index = -1;
    for(int i=0;i<5;i++){
        if(arr[i]==k){
            index = i;
            break;
        }
    }

    for(int i=index;i<5;i++){
        arr[i]=arr[i+1];
    }

    for(int i=0;i<4;i++){
        cout<<arr[i]<<" ";
    }
    
    return 0;
}