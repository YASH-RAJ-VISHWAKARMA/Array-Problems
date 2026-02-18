#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector<int> arr={1,2,3,4,5};
    vector<vector<int>> ans;
    int k= 4;

    for(int i=0;i<arr.size();i++){
        int sum=0;
        vector<int> temp;
        for(int j=i+1;j<arr.size();j++){
            for(int l=i;l<=j;l++){
                sum = sum + arr[l];
                temp.push_back(arr[i]);
                if(sum==k){
                    ans.push_back(temp);
                }
            }
        }
    }

    for(vector<int> i:ans){
        for(int j: i){
            cout<<j<<" ";
        }
        cout<<endl;
    }

    return 0;
}