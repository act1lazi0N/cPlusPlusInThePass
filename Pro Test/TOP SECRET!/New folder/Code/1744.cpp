#include<bits/stdc++.h>
using namespace std;
int n,t,i,s=0;
set<int> a;
vector<int> b;

int main()
{
    cin>>n;
    for(i=0; i<n; i++)
    {
        cin>>t;
        a.insert(t);
    }
    for (set<int>::iterator it = a.begin(); it != a.end(); it++)
    {
        b.push_back(*it);
        s++;
    }
    if(s<3)
    {
        cout<<"NO";
        return 0;
    }
    t=0;
    for(i=0; i<s-2; i++)
    {
        if(abs(b[i]-b[i+2])<=2)
        {
            t=1;
            break;
        }
    }
    if(t==1) cout<<"YES";
    else cout<<"NO";
}
