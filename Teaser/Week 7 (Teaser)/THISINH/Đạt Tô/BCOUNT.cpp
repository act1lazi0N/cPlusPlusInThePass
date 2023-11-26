#include<iostream>
#include<string>
using namespace std;
int main()
    {   int dem=0;
        string s;
        getline(cin,s);
        for(char i='0';i<='9';i++)
        {
            for(int h=0;h<s.size();h++)
            {
                if(s[h]==i)dem++;
            }
            cout<<dem<<" ";
            dem=0;
        }
    }
