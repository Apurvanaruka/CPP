#include<bits/stdc++.h>
using namespace std;

void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
    int j = 0,i = 0,k = 0;
    vector<int>v={};
    while(i < m && j < n){
        if(nums1[i] <= nums2[j]){
            v.push_back(nums1[i++]);
        }else{
            v.push_back(nums2[j++]);
        }
    }
    while(i < m){
        v.push_back(nums1[i++]);
    }
    while(j < n){
        v.push_back(nums2[j++]);
    }
    for(auto x:v){
        cout<<x<<" ";
    }

}
int main(){
    vector<int>nums1,nums2;
    nums1 = {1,1,3,0,0};
    nums2 = {2,5,6};
    merge(nums1,3,nums2,3);
    cout<<endl;

    return 0;
}