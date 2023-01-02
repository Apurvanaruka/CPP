#include<iostream>
using namespace std;

int main(){
  int n = 7;
  // cin>>n;
  for(int i = 0; i < n; i++){
    for(int j = 1;j <= 2*n; j++){
      if(j < n ){
        cout<<j;
      } else if(j < 2*n){
        if(j < n - i)
        cout<<n * 2 - j;
        

      }
    }
      cout<<endl;
  }
}