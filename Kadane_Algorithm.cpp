#include<iostream>
#include<cmath>
using namespace std;

int main(){
    int arr[] ={1,2,3,4,5};

    int maxi = arr[0];

    for(int i=1;i<5;i++){
        maxi = max(arr[i],maxi);
    }

    cout<<"Max: "<<maxi<<endl;

    return 0;
}