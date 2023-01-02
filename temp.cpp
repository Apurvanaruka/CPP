#include <bits/stdc++.h>
#include <algorithm>
using namespace std;

int main()
{
  vector<int> nums;
  nums = {1, 2, 3, 4, 5, 6, 7};
  int k = 3; 
  reverse(nums.begin() + (nums.size() - k), nums.end());
  reverse(nums.begin(), nums.end() - k);
  reverse(nums.begin(), nums.end());
  for(int i:nums){
    cout<<i<<" ";
  }
  return 0;
}
