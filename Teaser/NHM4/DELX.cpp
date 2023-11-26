#include<bits/stdc++.h>
using namespace std;

char x;
string s;
int main()
{
    cin >> x;
    fflush(stdin);
    getline(cin, s);
    for (int i = 0; s[i] != '\0';i++)
    {
        if (s[i] == x)
        {
            int j;
            j = i;
            while(s[j+1] != '\0')
            {
                s[j] = s[j + 1];
                j++;
            }
            s[j] = '\0';
            i--;
        }
    }
    cout << s;
}
