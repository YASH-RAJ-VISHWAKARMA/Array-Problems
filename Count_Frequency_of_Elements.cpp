#include<iostream>
using namespace std;

int main(){

    int arr[] = {1, 2, 2, 3, 4, 4, 4, 5};

    for(int i=0; i<8; i++){
        int count = 0;
        for(int j=0;j<8;j++){
            if(arr[i] == arr[j]){
                count++;
            }
        }
        cout << "Element: " << arr[i] << " Frequency: " << count << endl;
    }
    return 0;
}