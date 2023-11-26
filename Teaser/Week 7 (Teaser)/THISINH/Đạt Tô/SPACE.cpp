#include<iostream>
#include<string>

using namespace std;
int main()
    {   int dem=0;
        string s;
        getline(cin,s);

        for(int i=0;i<s.size();i++)
        {   dem++;
            if(s[i]==' '){cout<<dem-1<<" ";break;}

        }
        dem=0;
        for(int h=s.size()-1;h>=0;h--)
        {   dem++;
            if(s[h]==' '){cout<<s.size()-dem;break;}
        }
    }
