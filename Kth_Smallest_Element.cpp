#include<iostream>
using namespace std;

int main(){

    int arr[]={7,10,4,3,20,15};
    int k=3;

    for(int i=0;i<6;i++){
        for(int j=i+1;j<6;j++){
            if(arr[i]>arr[j]){
                swap(arr[i],arr[j]);
            }
        }
    }   

    cout<<k<<"rd smallest element is "<<arr[k-1]<<endl;

    return 0;
}