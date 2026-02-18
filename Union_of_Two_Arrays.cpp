#include<iostream>
using namespace std;

int main(){

    int arr1[]={1,2,3,4,5};
    int arr2[]={4,5,6,7,8};
    int ans[10]={0};

    int i=0,j=0,k=0;

    while(i<5 || j<5){
        if(arr1[i] == arr2[j]){
            ans[k]=arr1[i];
            i++;
            j++;
            k++;
        }
        else if(arr1[i]<arr2[i]){
            ans[k]=arr1[i];
            i++;
            k++;
        }
        else{
            ans[k]=arr2[j];
            j++;
            k++;
        }
    }

    for(int i=0;i<k;i++){
        cout<<ans[i]<<" ";
    }
}