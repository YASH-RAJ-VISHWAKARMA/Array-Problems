#include<iostream>
using namespace std;    

int main(){

    int arr[]={0,1,2,0,1,2,0,1,2};  

    int low=0,mid=0,high=8;

    for(int i=0;i<9;i++){
        if(arr[mid]==0){
            swap(arr[low],arr[mid]);
            low++;
            mid++;
        }
        else if(arr[mid]==1){
            mid++;
        }
        else{
            swap(arr[mid],arr[high]);
            high--;
        }
    }

    for(int i=0;i<9;i++){
        cout<<arr[i]<<" ";
    }

    return 0;
}