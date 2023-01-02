#include<bits/stdc++.h>
using namespace std;

int getPivet(vector<int>arr){
    int s = 0;
    int e = arr.size() - 1;
    int m;
    while(s < e){
        m = s + (e - s)/2;
        // cout<<"s:"<<s<<"m:"<<m<<"e:"<<e<<endl;
        // cout<<arr[m-1]<<arr[m]<<arr[m+1]<<endl;
        if(arr[0] <= arr[m]){
            s = m +1;                
        }else{
            e = m;
        }

    }
    return s;
}

int main(){
    vector<int> arr = {7,9,10,2,3,4};
    cout<<"pivet element = "<<getPivet(arr);
    return 0;
}