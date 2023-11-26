#include<bits/stdc++.h>
using namespace std;

int main () {
   string s, t, p = "";
   cin >> s >> t;
   int cnt = 0;
   for (int i = 0; i < s.size(); i++)
       if (s[i] != t[i]) cnt++;
   if (cnt % 2 != 0) cout << "impossible\n";
   else {
       int d1 = 0, d2 = 0;
       for (int i = 0, j = 0; i < s.size(); i++)
           if (s[i] == t[i]) p += '0';
           else
               if (d1 == cnt/2) { p += t[i]; d2++; }
               else
                   if (d2 == cnt/2) { p += s[i]; d1++; }
                   else {
                       p += '0';
                       if (s[i] == '0') d1++;
                       if (t[i] == '0') d2++;
                   }
       cout << p << endl;
   }
}
