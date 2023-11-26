#include<bits/stdc++.h>
using namespace std;

int n,q,s1[100005],s2[100005],s3[100005],l,r,i,a;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    cin>>n>>q;

    for(i=1; i<=n; i++)
    {
        cin>>a;
        if(a==1)
        {
            s1[i]=s1[i-1]+1;
            s2[i]=s2[i-1];
            s3[i]=s3[i-1];
        }
        else
        {
            if(a==2)
            {
                s1[i]=s1[i-1];
                s2[i]=s2[i-1]+1;
                s3[i]=s3[i-1];
            }
            else
            {
                s1[i]=s1[i-1];
                s2[i]=s2[i-1];
                s3[i]=s3[i-1]+1;
            }
        }
    }

    for(i=1;i<=q;i++)
    {
        cin>>l>>r;
        cout<<s1[r]-s1[l-1]<<' '<<s2[r]-s2[l-1]<<' '<<s3[r]-s3[l-1]<<'\n';
    }
}
