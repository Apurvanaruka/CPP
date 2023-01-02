#include<bits/stdc++.h>
using namespace std;
int main(){
    int num = 1073741825;
    int i = 1;
    while(i<num){
        i = i<<1;
        cout<<i<<endl;
    }
    if(i == num){
        cout<<"true\n";
    }else{
        cout<<"false\n";
    }
    return 0;

}