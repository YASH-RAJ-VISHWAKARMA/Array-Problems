#include<iostream>
using namespace std;

int main(){

    int arr[]={1,2,4,5};
    int sum = 5*(5+1)/2;

    int total_sum = 0;
    for(int i=0;i<4;i++){
        total_sum = total_sum + arr[i];
    }

    cout<<"Missing number is: "<<sum - total_sum<<endl;
    
    return 0;
}