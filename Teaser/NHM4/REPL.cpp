#include<bits/stdc++.h>
using namespace std;

string s,s1,s2;
int k;
int main()
{
    getline(cin,s1);
    getline(cin,s2);
    getline(cin,s);
    for(int i=1; i <= s.length(); i++)
    {
        while(s.find(s1)!=s.npos)
        {
            int k=s.find(s1);
            s.replace(k,s1.length(),s2);
        }
    }
    cout << s << " ";
    return 0;
}
