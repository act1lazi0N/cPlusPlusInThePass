#include<bits/stdc++.h>
using namespace std;
int main ()
{
    int x=0,y=0,n,t=0,a,b;cin>>n;char m;
    for (int i=0;i<n;i++)
    {
        cin>>m;
        if(t%4==0)
        {
            if(m=='G') {y++;}
            if(m=='B') {y--;t+=2;}
            if(m=='R') {x++;t+=1;}
            if(m=='L') {x--;t+=3;}
            continue;
        }
        if(t%4==1)
        {
            if(m=='G') {x++;}
            if(m=='B') {x--;t+=2;}
            if(m=='R') {y--;t+=1;}
            if(m=='L') {y++;t+=3;}
            continue;
        }
        if(t%4==2)
        {
            if(m=='G') {y--;}
            if(m=='B') {y++;t+=2;}
            if(m=='R') {x--;t+=1;}
            if(m=='L') {x++;t+=3;}
            continue;
        }
        if(t%4==3)
        {
            if(m=='G') {x--;}
            if(m=='B') {x++;t+=2;}
            if(m=='R') {y++;t+=1;}
            if(m=='L') {y--;t+=3;}
            continue;
        }
    }
    cout<<x<<" "<<y;
    return 0;
}
