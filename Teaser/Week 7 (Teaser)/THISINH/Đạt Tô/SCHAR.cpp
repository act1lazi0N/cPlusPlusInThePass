#include<bits/stdc++.h>

using namespace std;
inline int address(string s)
    {
        for(int i=0;i<s.size();i++)
        {
            if(s.find(s[i])==s.rfind(s[i]))
               {
                   cout<<i+1<<endl; return 0;
               }

        }
        cout<<"-1"<<endl;


    }
int main()
    {   freopen("BAI3.inp","r",stdin);
        freopen("BAI3.out","w",stdout);
        int t;
        cin>>t;
        fflush(stdin);
        string s[101];
        for(int i=0;i<t;i++)
        {
            getline(cin,s[i]);



        }
        for(int h=0;h<t;h++)
        {
            address(s[h]);
        }

    }
