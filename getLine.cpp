#include<iostream>
#include<stack>

#include<string.h>
using namespace std;

bool isCircularSentence(string sentence) {
        stack<char>stk;
        stk.push(sentence[0]);
        for(auto i:sentence){
            if(i == ' '){
                if(stk.top() == i){
                    stk.pop();
                }else{
                    stk.push(i);
                }
            }
        } 


  
        if(stk.empty())
            return true;
        else 
            return false;
    }

int main(){
    string name;
    // getline(cin,name,','); // getline delimiter
    // cout<<name;
    name = "this is my niw";

    cout<<isCircularSentence(name);
    return 0;
}