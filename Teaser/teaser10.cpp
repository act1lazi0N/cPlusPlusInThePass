#include<bits/stdc++.h>
using namespace std;

int main()
{
    char s[100];
    char x[100];
    int k = 0;
    gets(s);
    int i = 0;
    while (cin >> x[i++])
    {
        if (x[i] >= 'A' && x[i] <= 'Z')
        {
            x[i] -= 32;
        }
    }
        sort(x, x + i);

        if (x[i] != NULL)
        {
            if (x[i] == x[i - 1])
            {
                k++;
            }
            if (x[i] >= 'a' && x[i] <= 'z')
            {
                x[i] = s[i];
            }
            cout << s[i] << " " << k << endl;

        }
        else
            break;
}

