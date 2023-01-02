#include<bits/stdc++.h>
using namespace std;

int count(int x){
    int count = 0;
    while(x!=0){
        x>>=1;
        count++;
    }
    return count;
}
int wmain(){
    int x = 7;
    int digit;
    int num = 0;
    int  bit = count(x);
    // cout<<"bit = "<<bit<<endl;
    for (int i = 0; x != 0; i++)
    {
        digit = x & 1;
        x >>= 1;
        cout<<digit<<endl;
        num += digit*pow(10,bit--);
    }
    cout<<num<<endl; 
    return 0; 
}
int main(){
    cout<<pow(2,0);
}
 
