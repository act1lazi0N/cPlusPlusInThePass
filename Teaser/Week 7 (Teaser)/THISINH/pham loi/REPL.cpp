#include<bits/stdc++.h>
using namespace std;

int main()
{
    string s1,s2,s3;
    getline(cin,s1);
    getline(cin,s2);
    getline(cin,s3);
    int t=0;
    for(int i=0;i<s3.size();i++)
    {
        if(s3[i]==s1[0])
        {
            t++;
            for(int j=1;j<s1.size();j++)
                if(s1[j]==s3[i+j])t++;
        }
        if(t<s1.size())t=0;
        else
        {
            s3.erase(i,t);
            s3.insert(i,s2);
            t=0;
        }
    }
    cout<<s3;

}
