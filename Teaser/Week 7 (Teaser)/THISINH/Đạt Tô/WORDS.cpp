#include<iostream>
#include<string>

using namespace std;

int main()
    {
        string s;
        getline(cin,s);
        int dem=0;
        if(s[0]!=' '){dem++;}else dem=1;
        for(int i=1;i<s.size();i++)
        {
            if(s[i]==' '&&s[i+1]!=' ')dem++;
        }
        cout<<dem<<endl;
        if(s[0]!=' ')cout<<s[0];
        for(int h=1;h<s.size();h++)
        {    cout<<s[h];
             if(s[h]==' '&&s[h+1]!=' '){cout<<endl;}

        }


    }
