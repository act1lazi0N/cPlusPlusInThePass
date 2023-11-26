#include <bits/stdc++.h>
using namespace std ;

int main ()
{
    int n ;
    cin >> n ;
    string s[n];
    vector<int>h;
    for ( int i=0; i<n; i++)
    {
        cin >>s[i];
        h.push_back(-1);
    }
    for ( int i=0; i<n; i++)
    {
        string s1;
        s1=s[i];
        int vttt;
        for(char j='a'; j<='z'; j++)
            if(s[i].find(j)!=-1)
            {
                int t=0;
                while(s[i].find(j)!=-1)
                {
                    t++;
                    s[i].erase(s[i].find(j),1);
                }
                int vt=s1.find(j);
                if(t==1)
                {
                    vttt=vt+2;
                    h[i]=h[i]+vttt;
                    break;
                }
            }
    }
    for ( int i =0 ; i<n; i++)
        cout << h[i] << endl;
    return 0;
}


