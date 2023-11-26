#include<bits/stdc++.h>
using namespace std;
int main ()
{
    string s;getline(cin,s);
    char x=s[0];
    getline(cin,s);
    for(;s.find(x)!=-1;) s.erase(s.find(x),1);
    cout<<s;
    return 0;
}
