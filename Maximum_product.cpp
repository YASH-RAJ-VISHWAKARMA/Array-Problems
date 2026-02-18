#include<iostream>
using namespace std;

int main(){

    int arr[]={1,2,3,4,5};

    int max_product=0;

    for(int i=0;i<5;i++){
        for(int j=i+1;j<5;j++){
            max_product = max(max_product, arr[i]*arr[j]);
        }
    }

    cout<<"Maximum Product: "<<max_product<<endl;
}