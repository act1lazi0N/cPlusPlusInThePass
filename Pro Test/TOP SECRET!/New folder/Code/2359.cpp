#include <bits/stdc++.h>
using namespace std;
vector<int> a[4];
int kq1[4];
int main() {
    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    for (int i=0;i<4;i++)
    {
        int n;
        cin>>n;
        for(int j=0;j<n;j++)
        {
            int x;
            cin >> x;
            a[i].push_back(x);
        }
        sort(a[i].begin(),a[i].end());
    }
    int kq = INT_MAX;
    for (int i=0;i<4;i++)
    {
        for (auto x:a[i])
        {
            int t=1;
            int m=x;
            int q[4];
            q[i]=x;
            for(int j=0;j<4;j++)
            {
                if (i==j) continue;
                auto c=lower_bound(a[j].begin(), a[j].end(), x);
                if (c!=a[j].end())
                {
                    if(*c>m) m=*c;
                    q[j]=*c;
                }
                else t=0;
            }
            if (t&&m-x<kq)
            {
                kq=m-x;
                for(int j=0;j<4;j++) kq1[j]=q[j];
            }
        }
    }
    cout<<kq1[0];
    for (int i=1;i<4;i++) cout<<' '<<kq1[i];
}
