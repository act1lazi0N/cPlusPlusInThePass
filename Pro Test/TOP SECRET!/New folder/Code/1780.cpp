#include <iostream>
using namespace std;
int main()
{
    int k,t,r;
    cin>>k>>t;
    r=t/k;
    if(r%2==0)
        cout<<t%k;
    else
        cout<<k-t%k;
}
