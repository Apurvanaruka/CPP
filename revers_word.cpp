#include<iostream>
#include<string.h>

using namespace std;
int main(){
    char sentence[1000];
    string temp[1000];
    int len = 0;
    cout<<"Enter a sentence ->\n";
    cin.getline(sentence,1000);
    char* token = strtok(sentence," ");
    while(token != NULL){
    
        temp[len] = token;
        token = strtok(NULL," ");
        len++;
    }
    cout<<"Length : "<<len<<endl;
    for(int j = len - 1; j >=0; j--){
        cout<<temp[j]<<" ";
    }
    cout<<endl;

    return 0;
}