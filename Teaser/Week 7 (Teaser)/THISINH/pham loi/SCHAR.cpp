#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    for(int t=0;t<n;t++)
    {string s;
    cin>>s;int x=0,k=0;
    for(int i='a';i<='z';i++)
    {   k=0;
        for(int j=0;j<s.size();j++)
        {
            if(s[j]==i){k++;
            x=j;}
        }
        if(k==1){break;}
    }
    if(k==1)cout<<x+1<<endl;
    else cout<<-1<<endl;
    }

}
