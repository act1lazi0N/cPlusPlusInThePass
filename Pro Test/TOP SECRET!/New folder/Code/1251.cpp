#include<bits/stdc++.h>
using namespace std;
map<long long,int> key;
vector<long long> a;
int dem=0;
void ham(long long n)
{
    long long t=0;
    for(; n%2==0;)
    {
        t++;
        n=n/2;
    }
    if(t!=0)
    {
        key[2]+=t;
        a.push_back(2);
        dem++;
    }
    for(long long i=3; i*i<=n; i+=2)
    {
        if(n%i==0)
        {
            t=0;
            for(; n%i==0;)
            {
                t++;
                n=n/i;
            }
            if(key[i]==0) {a.push_back(i);dem++;}
            key[i]+=t;
        }
    }
    if(n!=1)
    {
        key[n]+=1;
        a.push_back(n);
        dem++;
    }
}
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int m,n;
    cin>>m>>n;
    for(int i=0; i<m; i++)
    {
        long long k;
        cin>>k;
        ham(k);
    }
    vector<int> kq;
    for(int i=0; i<n; i++)
    {
        long long x[m];
        for(int j=0; j<m; j++)
            cin>>x[j];
        int c=1;
        for(int j=0;j<dem;j++)
        {
            int t=key[a[j]];
            for(int s=0;s<m;s++)
            {
                for(;x[s]%a[j]==0;)
                {
                    t--;
                    x[s]/=a[j];
                    if(t<0) {c=0;break;}
                }
                if(c==0) break;
            }
            if(c==0) break;
        }
        if(c==0) continue;
        for(int j=0;j<m;j++)
        {
            if(x[j]!=1)
            {
                c=0;
                break;
            }
        }
        if(c==1) kq.push_back(i+1);
    }
    cout<<kq.size()<<endl;
    if(kq.size()!=0) cout<<kq[0];
    for(int i=1;i<kq.size();i++)
        cout<<" "<<kq[i];
}
