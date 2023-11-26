#include<iostream>
#include<string>

using namespace std;

int main()
    {
        string s;
        getline(cin,s);
        int dem=0;

        while(s.size()!=0)
        {
            for(char i='a';i<='z';i++)
            {
                for(int h=0;h<s.size();h++)
                {
                    if(s[h]==i||s[h]==i-32)
                    {
                        dem++;
                        s.erase(h,1);
                    }
                }
                if(dem!=0)cout<<i<<" "<<dem<<endl;
                dem=0;
            }

        }
        return 0;
    }
