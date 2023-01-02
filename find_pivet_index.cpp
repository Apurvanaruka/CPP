#include<bits/stdc++.h>
using namespace std;

class Solution {
    int sum(vector<int>&nums,int start,int end){
        int sum = 0;
        for(int i = start;i < end; i++){
            sum += nums[i];
        }
        return sum;
    }
public:
    int pivotIndex(vector<int>& nums) {
        int start = 0;
        int end = nums.size() - 1;
        int mid,leftSum = 0,rightSum = 0;
        while(start < end){
            mid = start + (end - start)/2;
            cout<<"\nmid = "<<mid; 
            leftSum = sum(nums,0,mid);
            rightSum = sum(nums,mid+1,nums.size());
            cout<<"\nleftSum = "<<leftSum;
            cout<<"\nrightSum = "<<rightSum;
            if(leftSum == rightSum){
                return mid;
            }else if(leftSum > rightSum){
                end = mid;
            }else if(leftSum < rightSum){
                start = mid+1;
            }


        }
        return -1;

    }
}; 
int main(){
    vector<int>arr = {2,1,-1};
    Solution obj;
    cout<<"\nindex = "<<obj.pivotIndex(arr);
    return 0;


}