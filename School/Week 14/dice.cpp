#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    int n;
    cin >> n;
    int x[501];
    for (int i = 0; i < n; i++)
    {
        cin >> x[i];
        switch(x[i])
        {
            case 1:
            {
                cout << 6;
                break;
            }
            case 2:
            {
                cout << 5;
                break;
            }
            case 3:
            {
                cout << 4;
                break;
            }
            case 4:
            {
                cout << 3;
                break;
            }
            case 5:
            {
                cout << 2;
                break;
            }
            case 6:
            {
                cout << 1;
                break;
            }
        }
    }
    return 0;
}
