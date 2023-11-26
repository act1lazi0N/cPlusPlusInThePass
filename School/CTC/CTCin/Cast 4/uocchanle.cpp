#include<bits/stdc++.h>
using namespace std;

int ck (int n)
{
    int k = 0;
    for (int i = 1; i <= n; i++)
    {
        if (n % i == 0)
            k++;
    }
    return k;
}
int main()
{
    int n;
    cin >> n;
    int k = 0;
    int t[101];
    int ans = 0;
    for (int i = 1; i <= n; i++)
    {
        cin >> t[i];
        if (ck(i) % 2 == 0)
        {
            cout << "CHAN" << endl;
        }
        else
        {
            cout << "LE" << endl;
        }
    }


}
