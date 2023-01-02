#include<bits/stdc++.h>
using namespace std;
 long long int mySqrt(int x) {
       
       long long int s = 0,e = x;
        long long int  m = s + (e - s-1)/2;
        while(s <= e){
            long long int squre = m*m;
            if(squre == x){
                return m;
            }else if(squre > x){
                e = m - 1;
            }else{
                s = m +1;
            }
            m = s + (e - s-1)/2;

        }
    return m;
 }
 double morePrision(double ans,int n){
    double factor = 1;
    for(double i = 0; i < 4 ;i++){
        factor = factor/10;
        for(double j = ans ; j*j <= n; j+=factor){
            ans = j;
        }
    }
    
    
    return ans;

 }

int main(){
    int n = 1111;
    double ans = mySqrt(n);
    cout<<morePrision(ans,n)<<endl;

    return 0;
}