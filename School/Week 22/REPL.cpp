#include<bits/stdc++.h>
using namespace std;

string s,s1,s2;
int main()
{
    ios::sync_with_stdio(false);
    cout.tie(0);
    cin.tie(0);
    cin >> s1 >> s2;
    getline(cin,s);
    for(int i=1; i <= s.length(); i++)
    {
        while(s.find(s1)!=s.npos)
        {
            int k=s.find(s1);
            s.replace(k,s1.length(),s2);
        }
    }
    for (int i = 1; i < s.length(); i++)
    {
        if (s[i] == ' ')
        {
            for (int h = i; h < s.length(); h++)
            {
                if (s[h] != ' ')
                {
                    s.erase(i, h-i-1);
                    break;
                }
            }
        }
    }
    cout << s;
    return 0;
}
