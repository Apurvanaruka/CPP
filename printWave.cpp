#include <bits/stdc++.h> 
#include<vector>
vector<int> wavePrint(vector<vector<int>> arr, int nRows, int mCols)
{
    vector<int> res;
    for(int i = 0; i < nRows; i++){
        for(int j = 0; j < mCols; j++){
            if(j&0){
                res.push_back(arr[j][i]);
            }else{
                res.push_back(arr[nRows - j][i]);
            }
        }
    }
    return res;
}

int main(){

}