#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    string x;
    string s;
    int a[101], t=0, dem=0;
    cin>>n >> s;
    x=s;
    reverse(x.begin(),x.end());
    for(int j=0; j<s.size(); j++)
    {

        if(s[j]==x[j])
        {
            dem++;
        }
        else
        {
            a[t]=dem;
            t++;
            dem=0;
        }
    }
    sort(a,a+n);
    cout<<a[n-1];
    return 0;
}
