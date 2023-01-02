#include <bits/stdc++.h>
using namespace std;

vector<int> findDuplicates(vector<int> &arr)
{
    // for(int i = 0;i<arr.size();i++){
    //     cout<<arr[i]<<" ";
    // }
    cout<<endl;
    vector<int> ans;
    for (int i = 0; i < arr.size(); i++)
    {
        int index = arr[i];
        index = abs(index) - 1;
        // cout<<arr[index]<<endl;
        if (arr[index] < 0)
        {
            ans.push_back((index+1) );
        }
        else
        {
            arr[index] *= -1;
        }
        for (int j = 0; j < arr.size(); j++)
        {
            cout << arr[j] << " ";
        }
        cout << endl;
    }
    return ans;
}
int main()
{
    vector<int> nums;
    vector<int> brr;
    nums = {10, 2, 5, 10, 9, 1, 1, 4, 3, 7};
    brr = findDuplicates(nums);
    cout<<endl<<endl;
    for(int i = 0; i < brr.size();i++){
    cout<<brr[i]<<" ";
    }
    return 0;
}