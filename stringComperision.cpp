#include<iostream>
#include<vector>
using namespace std;

 int compress(vector<char>& chars) {
        char temp;
        int count = 0;
        for(int i = 0;i < chars.size()-1; i++){
            temp = chars[i];
            int j = i;
            while(temp == chars[j]){
                count++;
                j++;
            }
            if(count > 1){
                if(count == 2){
                    chars[i+1] = count;
                }else{
                    chars[i+1] = count;
                }
            }        
        }
        for(auto a:chars){
            cout<<a<<" ";
        }
        return chars.size();
    }

int main(){
    vector<char> chars;
    chars = {"a","a","b","b","c","c","c"};
    cout<<compress(chars);
    return 0;
}