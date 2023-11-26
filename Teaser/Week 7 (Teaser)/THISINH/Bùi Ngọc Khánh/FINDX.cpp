#include<bits/stdc++.h>
using namespace std;
int main ()
{
    string s;getline(cin,s);
    char x=s[0];
    getline(cin,s);
    vector<int> kq;int dem=0;
    for(int i=0;i<s.size();i++)
    if(s[i]==x) {dem++;kq.push_back(i);}
    cout<<dem<<endl;
    for (int i=0;i<kq.size()-1;i++) cout<<kq[i]<<" ";
    cout<<kq[kq.size()-1];
    return 0;
}
