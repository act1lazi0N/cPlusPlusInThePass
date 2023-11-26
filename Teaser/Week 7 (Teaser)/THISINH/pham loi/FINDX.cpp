#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    vector <int> t;
    char x;
    cin>>x;int k=0;
    cin.ignore();
    getline(cin,s);

    for(int i=0;i<s.size();i++)
    {
        if(s[i]==x){k++;t.push_back(i);}
    }
    cout<<k<<endl;
    for(int i=0;i<t.size();i++)
        cout<<t[i]<<" ";
}
