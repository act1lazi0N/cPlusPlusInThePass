#include<bits/stdc++.h>
using namespace std;

int check(string s)
{
    int n = s.size();
    int m = 1, st = 0;
    for (int i = 0; i < s.size(); i++)
    {
        for (int j = i; j < s.size(); j++)
        {
            int ans = 1;
            for (int k = 0; k < (j - i + 1)/2; k++)
            {
                if (s[i + k] != s[j - k])
                {
                    ans = 0;
                }
            }
            if (ans && (j - i + 1) > m)
            {
                st = i;
                m = j - i + 1;
            }
        }
    }

    return m;
}
int main()
{
    int n;
    cin >> n;
    string s;
    cin >> s;
    if (check(s) == n)
    {
        cout << check(s);
    }


}
