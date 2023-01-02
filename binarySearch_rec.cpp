#include<bits/stdc++.h>
using namespace std;
int binarySearch(vector<int>arr,int key,int s,int e,int m){
    m = s + (e - s)/2;
    if(s > e){
        return -1;
    }else if(arr[m] == key){
        return m;
    }else if(arr[m] > key){
        return binarySearch(arr,key,s,m-1,m);
    }else if(arr[m] < key){
        return binarySearch(arr,key,m+1,e,m);
    }
}

int main(void){
    vector<int>arr = {1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,8,9,20,21,22,23,24,25,26,27,28,29,30};
    int key = 25;
    int size = arr.size();
    cout<<"index = "<<binarySearch(arr,key,0,size-1,0);
    return 0;
}