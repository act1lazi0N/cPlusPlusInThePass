#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;cin>>n;
    pair<string,int> a[n];
    for(int i=0;i<n;i++)
    {
        string s;cin>>s;
        transform(s.begin(),s.end(),s.begin(),::tolower);
        a[i].first=s;
        a[i].second=i;
    }
    sort(a,a+n);
    for(int i=0;i<n;i++)
    {
        cout<<a[i].second+1<<endl;
    }
}
