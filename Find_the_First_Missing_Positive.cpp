#include<iostream>
#include<unordered_map>
using namespace std;

int main(){

    int nums[] = {3,4,1};

    unordered_map<int,int> mapping;

    for(int i=0;i<3;i++){
        mapping[nums[i]];
    }

    for(int i=1;i<=3;i++){
        if(mapping.find(i) == mapping.end()){
            cout<<i;
            break;
        }
        else if(i==3){
            cout<< i+1;
        }
    }

    return 0;
}