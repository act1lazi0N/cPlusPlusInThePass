#include<bits/stdc++.h>
using namespace std;
int main()
{
    char x;
    cin>>x;
    cin.ignore();
    string s;
    getline(cin,s);
    for(int i=0;i<s.size();i++)
    {
        while(s[i]==x)s.erase(i,1);
    }
    cout<<s;
}
