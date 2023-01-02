#include<iostream>
#include<string>
using namespace std;
class operatorOverLoading
{
    public:
        string s;
        operatorOverLoading(){}
        operatorOverLoading(string s){
            this -> s = s;
        }
        string operator +(operatorOverLoading opov){
            s = s + " " + opov.s;
            return s;
        }
};
int main(){
    string s1, s2;
    cout << "Enter the first String: ";
    getline(cin, s1);
    cout << "Enter the Second String: ";
    getline(cin, s2);
    operatorOverLoading o1(s1), o2(s2), o3;
    o3 = o1+o2;
    cout << "The Concatenated String is: " <<endl << o3.s << endl;
    return 0;

}