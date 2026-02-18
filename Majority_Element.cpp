#include<iostream>
using namespace std;   

int main(){
    int arr[]={2,2,1,1,1,2,2};

    int element = -1;
    int count =0;

    for(int i=0;i<7;i++){
        if(count==0){
            element = arr[i];
            count++;
        }
        else if(element == arr[i]){
            count++;
        }
        else{
            count--;
        }
    }

    cout<<element;

    return 0;
}