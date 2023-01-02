#include<bits/stdc++.h>
using namespace std;

vector<vector<int>> pairSum(vector<int> &arr, int s){
   // Write your code here.
    int i = 0, j = 0;
    while(i < arr.size()){
        j = i+1;
        while(j < arr.size()){
              if(arr[i]+arr[j]==s){
                  cout<<arr[i]<<" "<<arr[j];
              }
            j++;     
        }
        i++;
    }
}

int main(){
    int s = 5;
    vector
    return 0;
}