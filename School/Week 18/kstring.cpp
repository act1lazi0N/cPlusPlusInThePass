#include<bits/stdc++.h>
using namespace std;

int main()
{
    int k, cnt = 0;
    char c;
    string s;
    cin >> k >> s;
    int l = s.size();
    sort(s.begin(), s.begin() + s.size());
    for (int i = 0; i < s.size(); i++)
    {
        if (i % k == 0)
        {
            c = s[i];
        }
        if (s[i] == c)
        {
            cnt++;
        }
    }
    if (s.size() == cnt && cnt % k == 0)
    {
        for (int i = 0; i < k; i++)
        {
            for (int l = 0; l < s.size(); l+=k)
            {
                cout << s[l];
            }
        }
    }
    else
    {
        cout << "-1";
    }
}
