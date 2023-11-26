#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s1,s2;
    vector<char>t1;
    vector<char>t2;
    cin>>s1>>s2;
    for(int i='a';i<='z';i++)
    {
        for(int x=0;x<s1.size();x++)
        {
            if(s1[x]==i){t1.push_back(i);break;}
        }
        for(int y=0;y<s2.size();y++)
        {
            if(s2[y]==i){t2.push_back(i);break;}
        }
    }
    if(t1.size()>t2.size())
    {for(int i=0;i<t1.size();i++)
        for(int j=0;j<t2.size();j++)
        if(t1[i]==t2[j]){cout<<t1[i]<<endl;break;}
    }
    else
    {for(int i=0;i<t2.size();i++)
        for(int j=0;j<t1.size();j++)
        {if(t2[i]==t1[j]){cout<<t2[i]<<endl;break;}}
    }

}
