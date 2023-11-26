#include<bits/stdc++.h>
using namespace std;
int cnt = 0;
int main()
{
    ios::sync_with_stdio(false);
    cout.tie(0);
    cin.tie(0);
    string s;
    getline(cin, s);
    stringstream ss(s);
    string str;
    while(ss >> str)
    {
        cnt++;
    }
    cout << cnt << "\n";
    for (int i = 0;i < s.length(); i++)
    {
        if(s[i] == ' ')
        {
            cout << "\n";
        }
        if(s[i] != ' ')
        {
            cout << s[i];
        }
    }

}
