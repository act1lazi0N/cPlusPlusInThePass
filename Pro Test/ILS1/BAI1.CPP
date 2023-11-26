#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    fflush(stdin);
    string s;
    getline(cin, s);
    if (s[0] == ' ')
    {
        for (int i = 0; i < s.length(); i++)
        {
            if (s[i] != ' ')
            {
                s.erase(0, i - 0);
                break;
            }
        }
    }
    for (int i = 1; i < s.length(); i++)
    {
        if (s[i] >= 'A' && s[i] <= 'Z')
        {
                s[i] += 32;
        }

        else if (s[i] == ' ')
        {
            for (int h = i; h < s.length(); h++)
            {
                if (s[h] != ' ')
                {
                    s.erase(i, h-i);
                    break;
                }
            }
        }
    }
    cout << s;

}
