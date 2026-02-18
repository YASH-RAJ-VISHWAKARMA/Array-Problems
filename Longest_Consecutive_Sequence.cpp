#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main(){
    vector<int> arr={2,1,4,3,100,101};
    sort(arr.begin(),arr.end());

    int count = 1;
    int ans = 1;
    for(int i=0;i<arr.size()-1;i++){
        if(arr[i+1]==arr[i]+1){
            count++;
        }
        else{
            count =1;
        }
        ans = max(ans,count);  
    }

    cout<<ans<<endl;
    
    return 0;
}