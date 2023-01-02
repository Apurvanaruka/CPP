#include<bits/stdc++.h>
using namespace std;
int binary_search(int arr[],int size,int key){
    int s = 0,e = size - 1,m;
    while(s <= e){
        m = s + (e-s)/2;//chalaki  for overflow of interger
        // cout<<"m = "<<m<<endl;
        if(arr[m] == key){
            return m;
        }else if(arr[m] < key){
            s = m + 1;
        }else if(arr[m] > key){
            e = m - 1;
        }
    }
    return -1;

}
int main(){
    int arr[10] = {1,2,2,3,22,54,55,56,67,90};
    int key = 67;
    // for(int i = 0; i < 10; i++){
    // cout<<arr[i]<<" "<<binary_search(arr,10,arr[i])<<endl;
    // }
    // cout<<binary_search(arr,10,122);
}