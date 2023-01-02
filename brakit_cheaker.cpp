#include<bits/stdc++.h>
using namespace std;
int main(){
    stack <int> st;
    int n;
    for(int i = 0;i < 4; i++){
        cin>>n;
        st.push(n);
    }
    for(int i = 0;i<4;i++)
    cout<<st.pop()<<endl;
    return 0;
}