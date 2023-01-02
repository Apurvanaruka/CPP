#include<bits/stdc++.h>
using namespace std;
void insertionSort(vector<int>arr){
    for(int i = 1;i < arr.size();i++){
        int j = i - 1;
        int temp =  arr[i];
        while(temp > arr[j] && j >= 0){
            arr[j+1] = arr[j];
            j--;
        }
        arr[j+1] = temp;
    }

    cout<<endl;

    for(int i = 0; i< arr.size();i++){
        cout<<arr[i]<<" ";
    }
}

int main(void){
    vector<int>arr = {8,2,3,5,2,11,55,3,5,3};
    insertionSort(arr);
    return 0;
}