#include<bits/stdc++.h>
using namespace std;

int main()
{
    int T;
    cin >> T;
    while(T--)
    {
        int a, b, cnt = 0, ans1 = 0, ans2 = 0, ans3 = 0;
        cin >> a >> b;
        int x[1001], y[1001], z[1001];
        for (x = 0; x < a; x++)
        {
            for (y = 0; y < a; y++)
            {
                z = a - (x + y);
                    if ((x + y + z == a) && (15*x + 9*y + z == b*3))
                        {
                            x[cnt++] = ans1;
                            y[cnt++] = ans2;
                            z[cnt++] = ans3;
                        }

            }
        }
        for (int g = 0; g < cnt; g++)
        {
            cout << x[g] << " " << y[g] << " " << z[g] << endl;
        }


    }
}
