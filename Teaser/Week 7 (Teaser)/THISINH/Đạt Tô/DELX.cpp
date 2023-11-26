#include<iostream>
#include<string>

using namespace std;

int main()
    {
        string x,s;
        getline(cin,x);
        fflush(stdin);
        getline(cin,s);

        int i=s.find(x);

        while(i!=-1)
        {
            s.erase(i,x.size());
            i=s.find(x);
        }
    cout<<s;
    }
