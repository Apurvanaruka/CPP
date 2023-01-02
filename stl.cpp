#include<iostream>
#include<array>
using namespace std;

int main(){
    array<int,3> arr{2,3,5};
    // display(arr);
    
    cout<<arr.at(2);
    // for(int i = 0;i < arr.size(); i++){
        // cout<<arr[i]<<" ";
    // }
    return 0;
}