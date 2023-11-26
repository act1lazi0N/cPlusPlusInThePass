#include<bits/stdc++.h>

using namespace std;

int main()
    {   freopen("KiTuChung.inp","r",stdin);
        freopen("KiTuChung.out","w",stdout);
        string x,y;

        getline(cin,x);
        getline(cin,y);
        for(char j='a';j<='z';j++)
        {
            if(x.find(j)!=-1&&y.find(j)!=-1)
            {
                cout<<j<<endl;
            }
        }
    }
