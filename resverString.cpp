#include<bits/stdc++.h>
using namespace std;
int main(){
    string str;
    int count = 0;
    cout<<"Enter your string ->\n";
    getline(cin,str);
    int s = 0;
    for(int i = 0; i < str.length(); i++){
        if(str[i] == ' '){
            int e = i-1;
            while(s < e){
                swap(str[s++] , str[e--]);
            }
            s = i+1;
        }
    }
    cout<<str;
    return 0;
}