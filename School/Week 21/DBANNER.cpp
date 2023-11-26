#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
   long n;
   cin >> n;
   vector<ll>a(n);
   vector<ll>s(n);
   for (ll i = 0; i < n; i++) cin >> a[i];
   for (ll i = 0; i < n; i++)
   {
       ll j = 0;
       while(j < n && (a[i] <= a[j] || j <= i))
       {
           if (a[i] > a[j]) s[i] = 0;
           else s[i] += a[i];
           j++;
       }
   }
   cout << *max_element(s.begin(), s.end());
}
