#include<iostream>
#include<string>
using namespace std;

int main()
    {
        string s;
        getline(cin,s);
        int l=0,r=0;

        for(int i=0;i<s.size();i++)
        {
            if(s[i]=='('){l++;}
            else if (s[i]==')'){r++;}
            else {cout<<"KHONG HOP LE"; return 0;}
        }
        if(l==r){cout<<"DUNG";}
        else cout<<"KHONG DUNG";
    }
