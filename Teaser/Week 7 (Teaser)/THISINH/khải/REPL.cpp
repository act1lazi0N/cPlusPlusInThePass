#include<bits/stdc++.h>
using namespace std;
int main ()
{
    string s1,s2,s,t1,t2;int x;
    getline(cin,s1);getline(cin,s2);getline(cin,s);
    for(;s.find(s1)!=-1;)
    {
        x=s.find(s1);
        s.erase(x,s1.size());
        s.insert(x,s2);
    }
    cout<<s;
    return 0;
}
