#include<iostream>
using namespace std;

int main(){

    int arr[]= {2,9,1,6,7};
    int max_diff=0;

    for(int i=0;i<5;i++){
        for(int j=i+1;j<5;j++){
            max_diff = max(max_diff, max(arr[i]-arr[j], arr[j]-arr[i]));
        }
    }

    cout<<"Maximum Difference: "<<max_diff<<endl;
    return 0;
}