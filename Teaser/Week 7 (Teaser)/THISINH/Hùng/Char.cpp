#include <bits/stdc++.h>
using namespace std;
int main() {
    string s;
     getline(cin,s);
    vector<int>m;
    vector<char>n;
    for(int i=0;i<=s.size()-1;i++)
    {  if(s[i]>='A'&& s[i]<='Z')
       s[i]+=32;}

for(char i='a'; i<='z'; i++)
        if(s.find(i)!=-1)
    {
        int t=0;
        while(s.find(i)!=-1)
        {
            t++;
            s.erase(s.find(i),1);
        }
        m.push_back(t); n.push_back(i);
    }


    for(int i=0; i<m.size(); i++)
         cout<<n[i]<<" "<<m[i]<<endl;

}
