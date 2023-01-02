#include<iostream>
#include<algorithm>
using namespace std;

string removeDuplicates(string s) {
        string stk;
        int i = 0;
        while( i < s.length()){
            if(stk[stk.length()-1] == s[i]){
                stk.erase(stk.length()-1);
            }else{
                stk.push_back(s[i]);
            }
            i++;
        }
        return stk;

    }
  int main(){
    string s = "azxxzy";
    cout<<removeDuplicates(s);
    return 0;
}