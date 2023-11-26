#include<bits/stdc++.h>
using namespace std;
bool check(int n)
{
    int a;
    while(n>0)
    {
        a=n%10;
        if(a==8)
            return true;
        else
            n=n/10;
    }
    if(n<0)
        return false;

}
int main()
{
    long long n;
    int dem=1;
    cin>>n;
    while(check(abs(n+1))==false)
    {
        n+=1;
        dem++;
    }
    cout<<dem;
    return 0;
}
