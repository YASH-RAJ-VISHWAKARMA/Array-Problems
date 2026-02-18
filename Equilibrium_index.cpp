#include<iostream>
using namespace std;

int main(){

    int arr[]={1,2,3,4,5};
    int equilibrium_index=-1;

    int sum_left = arr[0];
    int right_sum = 0;

    int i=1;
    int j=4;

    while(i<=j){
        if(sum_left<right_sum){
            sum_left += arr[i];
            i++;
        }
        else if(sum_left>right_sum){
            right_sum += arr[j];
            j--;
        }
        else{
            equilibrium_index = i;
            break;
        }
    }

    cout<<"Equilibrium Index: "<<equilibrium_index<<endl;
    return 0;
}