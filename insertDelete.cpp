#include<bits/stdc++.h>
using namespace std;

void Delete(int arr[],int n,int index){
    for(int i = index; i < n-1; i++){
        arr[i] = arr[i + 1];
    }
}

void insert(int arr[],int n,int index,int key){
    for(int i = n-1;i > index - 1; i--){
        arr[i + 1] = arr[i];
    }
    arr[index] = key;
}

void display(int arr[],int n){
    for(int i = 0;i < n; i++){
        cout<<arr[i]<<" ";
    }
}

int main(){
    int arr[10] = {1,2,3,4,5,6,7,8,9,10};
    // Delete(arr,10,3);
    insert(arr,10,3,222);
    
    display(arr,10);
    return 0;
}