#include<bits/stdc++.h>
using namespace std;

 bool uniqueOccurrences(vector<int>& arr) {
        vector<int>ans;
        int count = 1;
        sort(arr.begin(),arr.end());
        for(int i = 0; i< arr.size();i++){
            if(arr[i] == arr[i+1]){
                count++;
            }else{
                ans.push_back(count);
                count = 1;
            }
        }
        sort(ans.begin(),ans.end());
        // bool falge = false;      
        for(int i = 0; i< ans.size();i++){
            if(ans[i] == ans[i+1]){
                return false;
            }
        }
        return true;
    }
int main(){
    vector<int>arr;
    arr = {1,2,2,1,2,1,3};
    bool falge = uniqueOccurrences(arr);
    if(falge){
        cout<<"yes";
    }else{
        cout<<"no";
    }
    return 0;
}