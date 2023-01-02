#include<iostream>
using namespace std;
int hanoi(int n,char l,char m,char r){
    if(n == 1)
    cout<<l<<" to "<<r<<endl;
    else{
    hanoi(n-1,l,r,m);
    hanoi(1,l,m,r);
    hanoi(n-1,m,l,r);
    }

}
int main()
{
    int n = 3;
    // cout<<"Enter No. of plates : ";
    // cin>>n;
    hanoi(n,'l','m','r');
    return 0;
}