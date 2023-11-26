#include<bits/stdc++.h>
using namespace std;

int n, m, k,i;
vector<int> x, y;

int main () {
   ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
   cin>>n>>m>>k;
   for ( i = 1; i <= k; i++) {
       int t, v;
       cin>>t>>v;
       if (t == 0)
           x.push_back(v);
       else
           y.push_back(v);
   }
   x.push_back(0);
   x.push_back(n);
   y.push_back(0);
   y.push_back(m);
   sort(x.begin(), x.end());
   sort(y.begin(), y.end());
   int maxX = 0, maxY = 0;
   for ( i = 1; i < x.size(); i++)
       maxX = max(maxX, x[i]-x[i-1]);
   for ( i = 1; i < y.size(); i++)
       maxY = max(maxY, y[i]-y[i-1]);
    cout<<min(maxX, maxY);
}
