#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main(){

    vector<int> arr={2,4,7,8,9};
    sort(arr.begin(),arr.end());
    vector<int> ans;

    int i=0,j=arr.size()-1;
    while(i<=j){
        ans.push_back(arr[i]);
        i++;
        if(arr[j]>arr[i]){
            ans.push_back(arr[j]);
            j--;
        }
    }

    for(int n: ans){
        cout<<n;
    }
    
    return 0;
}