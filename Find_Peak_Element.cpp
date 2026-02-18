#include<iostream>
using namespace std;

int main(){

    int arr[]={1,2,3,1};

    int s = 0;
    int e = 3;
    int mid = s + (e-s)/2;

    while(s<e){
        mid = s + (e-s)/2;
        if(arr[mid]<arr[mid+1]){
            s=mid+1;
        }
        else{
            e = mid;
        }
    }

    cout<<arr[s]<<endl;

    return 0;
}