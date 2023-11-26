#include<bits/stdc++.h>
using namespace std;
int a, b, c;
int main()
{
    int T;
    cin >> T;
    while(T--)
    {
        cin >> a >> b >> c;
        int tmp = abs(b - c) + c;
        if (a < tmp)
        {
            cout << "1" << "\n";

        }
        else if (a > tmp)
        {
            cout << "2" << "\n";

        }
        else
        {
            cout << "3" << "\n";

        }
    }
}
