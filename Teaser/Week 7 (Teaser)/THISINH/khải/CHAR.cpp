#include<bits/stdc++.h>
using namespace std;
int main ()
{
    string s,ss="";getline(cin,s);
    transform(s.begin(),s.end(),s.begin(),::tolower);
    sort(s.begin(),s.end());
    vector<int> kq;int t;
    for(;s.size()!=0;)
    {
        t=s.rfind(s[0])+1;
        if(s[0]==' ') {s.erase(0,t);continue;}
        ss+=s[0];kq.push_back(t);
        s.erase(0,t);
    }
    for (int i=0;i<kq.size();i++)
    {
        cout<<ss[i]<<" "<<kq[i]<<endl;
    }
    return 0;
}
