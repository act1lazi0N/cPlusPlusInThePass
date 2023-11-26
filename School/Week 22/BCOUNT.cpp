#include<bits/stdc++.h>
using namespace std;
int a[9];
int main()
{
    ios::sync_with_stdio(false);
    cout.tie(0);
    cin.tie(0);
    string s;
    getline(cin, s);
    for(int i = 0; i <s.length(); i++)
    {
        if (s[i] <= '9' && s[i] >= 0)
        {
            a[s[i] - '0']++;
        }
    }
    for (int i = 1; i <= 10; i++)
    {
        cout << a[i] << " ";
    }
}
