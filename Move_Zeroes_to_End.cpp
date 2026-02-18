#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector<int> arr={0,1,0,3,12};
    int count = 0;

    for(int i=0;i<arr.size();i++){
        if(arr[i] != 0){
            arr[count]=arr[i];
            count++;
        }
    }

    while(count<arr.size()){
        arr[count]=0;
        count++;
    }

    for(int i: arr){
        cout<<i<<" ";
    }
    
    return 0;
}