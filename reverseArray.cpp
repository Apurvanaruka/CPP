#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<int>v = {2,4,6,4,32,5,6};
    for(auto i:v){
        cout<<i<<" ";
    }
    cout<<"\nafter reverse"<<endl;
    reverse(v.begin()+3,v.end());
    for(auto i:v){
        cout<<i<<" ";
    }
    return 0;

}