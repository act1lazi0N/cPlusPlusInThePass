#include<bits/stdc++.h>
using namespace std;
int n, x[20];
void duyet(int i)
{
    if (i > n)
    {
        for (j = 1; j <= n; j++)
        {
            cout << x[j];
        }
        cout << endl;
        return;
    }
    for (int j = 0; j <= 1; j++)
    {
        x[i] = j;
        duyet(i+1);
    }
}
int main()
{
    cin >> n;
    duyet(1);
    return 0;
}
