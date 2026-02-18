#include<iostream>
using namespace std;

int main(){

    int arr[]={2,4,7,8,9};
    int largest=-1;
    int second_largest=-1;

    for(int i=0;i<5;i++){
        if(arr[i]>largest){
            second_largest=largest;
            largest=arr[i];
        }
        else if(arr[i]>second_largest && arr[i]!=largest){
            second_largest=arr[i];
        }
    }

    cout<<"Second Largest: "<<second_largest<<endl;

    return 0;
}