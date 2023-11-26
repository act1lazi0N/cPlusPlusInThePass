#include <bits/stdc++.h>
using namespace std;
int main(){
int a[10];
for (int i=0;i<10;++i)
  a[i]=0;
string s;
getline(cin,s);
for(int i=0; i<=s.size();++i)
{ if(s[i]=='0') a[0]++;
    if(s[i]=='8') a[8]++; if(s[i]=='9') a[9]++; if(s[i]=='1') a[1]++; if(s[i]=='2') a[2]++; if(s[i]=='3') a[3]++; if(s[i]=='4') a[4]++; if(s[i]=='5') a[5]++; if(s[i]=='6') a[6]++; if(s[i]=='7') a[7]++;  
}
for(int i=0; i<10;++i)
cout<<a[i];
    return 0;
}
