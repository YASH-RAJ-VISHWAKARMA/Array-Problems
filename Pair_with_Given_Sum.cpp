#include<iostream>
#include<unordered_map>
#include<vector>
using namespace std;

int main(){

    int arr[]={1, 2, 3, 4, 5};
    int k=4;
    unordered_map<int,int> mapping;
    vector<pair<int,int>> ans;


    for(int i=0;i<5;i++){
        if(mapping.find(k-arr[i]) != mapping.end()){
            pair<int,int> temp ={arr[i],k-arr[i]};
            ans.push_back(temp);
        }
        mapping[arr[i]] = 0;
    }

    for(pair<int,int> i: ans){
        cout<<i.first<<" "<<i.second<<endl;
    }
}