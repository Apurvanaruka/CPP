#include <iostream>
#include<string>
using namespace std;

int main() {
	// your code goes here
	int t,n,count = 0;
	string s;
	cout<<"enter number of test case : ";
	cin>>t;

	cout << "work in progress....\n";
	while(t--)
	{
        count = 0;
		cout<<"Enter your word : ";
	    cin>>s;
	    for(int i=0;i<s.size();i++)
	    {   
	        if(s[i]=='b'||s[i]=='c'||s[i]=='d'||s[i]=='f'||s[i]=='g'||s[i]=='h'||s[i]=='j'||s[i]=='k'||s[i]=='l'||s[i]=='m'||s[i]=='n'||s[i]=='p'||s[i]=='q'||s[i]=='r'||s[i]=='s'||s[i]=='t'||s[i]=='x'||s[i]=='v'||s[i]=='w'||s[i]=='y'||s[i]=='z')
	            count++;
	    }
        cout<<"No. of constant : "<<count<<endl;
	   if (count>4)
	    cout<<"Not easy to pronous.\n"<<endl;
	   else
	    cout<<"Yes easy to pronus.\n"<<endl;
	   
	}
	return 0;
}