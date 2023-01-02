
  #include<iostream>
using namespace std;

int  main(){
  int a,b;
  int &x = a;
  int *p = &b;
  cin>>a;
  cin>>*p;
  cout<<a<<" "<<*p<<endl;
  cout<<&a<<" "<<&*p;
  return 0;
}