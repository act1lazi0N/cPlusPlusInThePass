#include <bits/stdc++.h>
using namespace std;

int main() {
   int a, b; cin >> a >> b;
   int n[10000];
   int m[10000];
   for (int i = 0; i <= a; i++)
   {
       cin >> n[i];
   }
   for (int i = 0; i <= b; i++)
   {
       cin >> m[i];
   }
   cout << m << n;
}
