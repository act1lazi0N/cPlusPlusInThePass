#include<bits/stdc++.h>
using namespace std;
string s;
long long xb,xs,xc,nb,ns,nc,pb,ps,pc,r0,kq=0,l,r,m,q,q1,t1,t2,t3,c=0;
int main()
{
    cin>>s;
    cin>>nb>>ns>>nc;
    cin>>pb>>ps>>pc;
    cin>>r0;
    for(int i=0;i<s.size();i++)
    {
        if(s[i]=='B') xb++;
        if(s[i]=='S') xs++;
        if(s[i]=='C') xc++;
    }
    q1=xb*pb+xs*ps+xc*pc;
    if(xb!=0) t1=nb/xb;
    else
    {
        t1=0;
        pb=0;
        nb=0;
    }
    if(xs!=0) t2=ns/xs;
    else
    {
        t2=0;
        ps=0;
        ns=0;
    }
    if(xc!=0) t3=nc/xc;
    else
    {
        t3=0;
        pc=0;
        nc=0;
    }
    l=0,r=max(t1,max(t2,t3))+r0/q1+1,m;
    for(;l<r;)
    {
        m=(l+r)/2;
        q=max((m*xb-nb),c)*pb+max(c,(m*xs-ns))*ps+max(c,(m*xc-nc))*pc;
        if(q>r0)
            r=m;
        else
            l=m+1;
    }
    kq=l;
    if(max((kq*xb-nb),c)*pb+max(c,(kq*xs-ns))*ps+max(c,(kq*xc-nc))*pc>r0) kq--;
    cout<<kq;
}
