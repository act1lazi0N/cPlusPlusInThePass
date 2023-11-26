#include<iostream>
#include<string>

using namespace std;

int main()
    {   int dem=0;
        char x;
        string s;
        cin>>x;
        cin.ignore();
        getline(cin,s);

        for(int i=0;i<s.size();i++)
        {
            if(s[i]==x)dem++;
        }

        cout<<dem<<endl;
        dem=0;
        for(int h=0;h<s.size();h++)
        {   dem++;
            if(s[h]==x){cout<<dem-1<<" ";}
        }
    }
