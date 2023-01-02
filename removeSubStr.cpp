#include <bits/stdc++.h>
using namespace std;

bool check(string s, string part, int Psize, int i)
{
    int j = 0;
    while (j < Psize)
    {
        if (s[i] != part[j])
        {
            return false;
        }
        i++;
        j++;
    }
    return true;
}
string removeOccurrences(string s, string part)
{
    string temp="";
    // cout<<temp<<endl;
    // cout<<s<<endl;
    // cout<<part<<endl;
    bool falge = true;
    int Psize = part.size();
    int i = 0;
    int t=0;
    while (true)
    {
        i = 0;

        while (i < s.size())
        {
            if (check(s, part, Psize, i))
            {
                i += Psize;
                t++;
            }
            else
            {
                temp.push_back(s[i++]);
        
            }
        }
        // cout<<temp<<endl;
        s = temp;
        temp="";
    }
    return s;
 }

int main()
{
    string s = "daabcbaabcbc";
    string part = "abc";
    cout<<removeOccurrences(s, part);

    return 0;
}