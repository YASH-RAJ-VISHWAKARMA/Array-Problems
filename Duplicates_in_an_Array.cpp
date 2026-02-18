#include<iostream>
#include<unordered_map>
using namespace std;

int main(){
    int arr[]={1,2,2,2,3,4,5,5,5};

    unordered_map<int,int> mapping;
    for(int i=0;i<9;i++){
        mapping[arr[i]]++;
    }

    for(pair<int,int> i: mapping){
        if(i.second>1){
            cout<<i.first<<endl;
        }
    }
}