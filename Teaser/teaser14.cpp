#include<bits/stdc++.h>
using namespace std;
int main ()
{
    int x,y,n,a=0,b=0;
    cin>>x>>y>>n;char m;vector<int> kq;
    if ((a==x&&b==y)||(a==x&&b==y+1)||(a==x-1&&b==y+1)||(a==x-1&&b==y)||(a==x-1&&b==y-1)||(a==x&&b==y-1)||(a==x+1&&b==y-1)||(a==x+1&&b==y)||(a==x+1&&b==y+1)) kq.push_back(0);
    for (int i=1;i<=n;i++)
    {
        cin>>m;
        if(m=='R') a++;
        if(m=='L') a--;
        if(m=='U') b++;
        if(m=='D') b--;
        if ((a==x&&b==y)||(a==x&&b==y+1)||(a==x-1&&b==y+1)||(a==x-1&&b==y)||(a==x-1&&b==y-1)||(a==x&&b==y-1)||(a==x+1&&b==y-1)||(a==x+1&&b==y)||(a==x+1&&b==y+1)) kq.push_back(i);
    }
    for (int i=0;i<kq.size();i++) cout<<kq[i]<<endl;
    if(kq.size()==0) cout<<-1;
    return 0;
}
