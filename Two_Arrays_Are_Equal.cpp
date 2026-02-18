#include<iostream>
using namespace std;

int main(){

    int arr[]={1,2,3,4,5};
    int arr2[]={1,2,3,4,5};
    bool flag = true;

    for(int i=0;i<5;i++){
        if(arr[i] != arr2[i]){
            cout<<"Not Equal";
            flag = false;
            break;
        }
    }

    if(flag){
        cout<<"Equal";
    }
    
    return 0;
}