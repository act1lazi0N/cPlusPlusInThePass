#include<bits/stdc++.h>
using namespace std;

string a,b,k;
int n,i,ia,ib,na,nb,du=0,t;
char c;

int main()
{
    freopen("TONGCAPSO.INP","r",stdin);
    freopen("TONGCAPSO.OUT","w",stdout);

    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    cin>>n;

    for(i=0;i<n;i++)
    {
        cin>>a>>b;
        ia=a.size()-1;
        ib=b.size()-1;
        t=a[ia]+b[ib]-'0'-'0';
        if(t%2==1)
            continue;
        k="";
        du=0;
        for(;ia>=0||ib>=0;)
        {
            if(ia>=0)
                na=a[ia]-'0';
            else
                na=0;
            if(ib>=0)
                nb=b[ib]-'0';
            else
                nb=0;
            t=na+nb+du;
            du=t/10;
            t=t%10;
            c=t+'0';
            k=c+k;
            ia--;
            ib--;
        }
        if(du!=0)
        {
            c=du+'0';
            k=c+k;
        }
        cout<<k<<'\n';
    }
}
