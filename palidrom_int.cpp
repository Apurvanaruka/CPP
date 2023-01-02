#include<string.h>
#include<iostream>
using namespace std;

string rev(string s){
    int len = s.length();
    for(int i = 0;i < s.length() / 2; i++){
        swap(s[i],s[len - i - 1]);
    }
    return s;
}
bool compair(string a,string b){
  for(int i = 0; i < a.length(); i++){
    if(!(a[i]==b[i])){
      return false;
    }
    return true;
  }
}
int main(){
//   cout<<(-10>>2)<<endl;
  int num = 10;
  string s = to_string(num);
  string st = s;
  cout<<s<<endl; 
  s = rev(s); 
  cout<<s<<endl;
  cout<<compair(s,st);
  
}