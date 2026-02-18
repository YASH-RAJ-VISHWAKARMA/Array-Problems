#include<iostream>
using namespace std;

int main(){

    int arr[]={1,2,2,2,3,4,5,5,5};

    int j=0;
    for(int i=1;i<9;i++){
        if(arr[i] != arr[i-1]){
            arr[j]=arr[i-1];
            j++;
        }
    }

    for(int i=0;i<j;i++){
        cout<<arr[i]<<endl;
    }

    return 0;
}