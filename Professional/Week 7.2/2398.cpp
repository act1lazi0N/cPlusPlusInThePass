#include<bits/stdc++.h>
using namespace std;

int main()
{

    int n, m;
    cin >> n >> m;
    char a[n][m];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> a[i][j];
        }
    }
    int res = 0;

    for (int i = 1; i < n; i++)
    {
        for (int j = 1; j < m - 1; j++)
        {
            string tmp = "";
            tmp += a[i][j];
            tmp += a[i+1][j+1];
            tmp += a[i+1][j];
            tmp += a[i][j+1];
            sort(tmp.begin(), tmp.end());
            cout << tmp << "\n";
            if (tmp == "acef")
            {
                res++;
            }
        }
    }
    cout << res;

}
