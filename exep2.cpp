#include<iostream>
using namespace std;
int main(){
    int size;
    while(size > 20){
        cout<<"Enter size between 1 to 20 = ";
        cin>>size;
        if(size > 20) cout<<"Please enter valid input!\n";
    }
    for(int i = 0;i < size; i++){
        for(int j = 0;j < size; j++){
            if(i == 0 || i == size - 1) cout<<"*";
            else if(j == 0 || j == size - 1) cout<<"*";
            else cout<<" ";
        }
        cout<<endl;
    }
    return 0;
}