#include<bits/stdc++.h>
using namespace std;
using ll = long long;

int main()
{
    int T, Q, L, ans1, ans2;
    int TC;
    cin >> TC;
    while(TC--)
    {
        cin >> T >> Q >> L;

        ans1=0;ans2=0;
        while(L>1)
        {
            if(T%L==0)
                {ans1++;T--;}
            else if(Q%L==0)
                {ans2++;Q--;}
            else L--;
        }
        cout<<ans1<<" "<<ans2<<endl;
    }
}
