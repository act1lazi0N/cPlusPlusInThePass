#include<iostream>
#include<string>

using namespace std;

int main()
    {
        string s,s1,s2;

        getline(cin,s1);
        getline(cin,s2);
        getline(cin,s);

        int i=s.find(s1);
        while(i!=-1)
        {
            s.erase(i,s1.size());
            s.insert(i,s2);
            i=s.find(s1);
        }
        cout<<s;

    }
