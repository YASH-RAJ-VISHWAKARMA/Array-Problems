#include<iostream>
using namespace std;

int main(){
    int arr1[]={1,2,3,4,5};
    int arr2[]={4,5,6,7,8};

    int i=0,j=0;

    while(i<5 && j<5){
        if(arr1[i]==arr2[j]){
            cout<<arr1[i]<<" ";
            i++;
            j++;
        }
        else if(arr1[i]<arr2[j]){
            i++;
        }
        else{
            j++;
        }
    }
}