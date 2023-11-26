#include<bits/stdc++.h>
using namespace std;

int main()
{
    string s,s1;
    getline(cin,s);
    int t=0;
    for(int i='a';i<='z';i++)
        {for(int j=0;j<s.size();j++)
    {
        if(s[j]==i||s[j]==i-32)t++;
    }
    if(t!=0){s1=i;cout<<s1<<" "<<t<<endl;}
    t=0;
        }
}
