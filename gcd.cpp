#include<bits/stdc++.h>
using namespace std;
int gcd(int a,int b){
    if(a == 0 || b == 0)
        return 0; 
    int mini = min(a,b);
    int maxi = max(a,b);
    int ans = mini;
    while(ans <= 1){
        if(maxi % ans == 0 && mini % ans == 0)
        return ans;
        ans--;
    }
} 

int main(){
    int num1,num2;
    cout<<"Enter two numbers : ";
    cin>>num1>>num2;
    cout<<"gcd = "<<gcd(num1,num2);
    return 0;
}