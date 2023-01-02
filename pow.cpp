#include <bits/stdc++.h>
using namespace std;
class Solution
{
    int count(int num){
        int bit = -1;
        while(num != 0){
            num >>= 1;
            bit++;
        }
        return bit;
    }
    int pow(int a,int b){
        if(b == 0){
            return 1;
        }else{
            return a*pow(a,b-1);
        }
    }
    public:
    int binary_to_deciaml(int x,int n)
    {
        int num = 0;
        int bit = count(n);
        // cout<<bit<<endl;
        for (int i = 0; x != 0; i++)
        {
            num += x % 10 * pow(2, bit--);
            x /= 10;
        }
        return num;
    }

    int decimal_to_binary(int x)
    {
        // if(x == 0)
        // return 1;
        int digit;
        int num = 0;
        int bit = count(x);
        for (int i = 0; x != 0; i++)
        {
            digit =  !(x & 1);
            x >>= 1;
            cout<<digit<<endl;
            num += digit*pow(10,bit--);            
            // cout<<num<<endl;
        }
        cout<<num<<endl;
        return num; 
    }
    int bitwiseComplement(int n) {
        int binary = decimal_to_binary(n);
        // cout<<binary<<endl;
        int decimal = binary_to_deciaml(binary,n);
        return decimal;  
    }
};

int main(){
    int num = 0;
    Solution obj;
    cout<<obj.bitwiseComplement(num);    
    return 0;
}
