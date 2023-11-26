#include<bits/stdc++.h>
using namespace std;
int ans1[1001], ans2[1001], ans3[1001], t, cnt;
int main()
{
    int T;
    cin >> T;
    while(T--)
    {
        t = 0;
        cnt = 0;
        int a, b;
        cin >> a >> b;
        int x, y, z;
        for (x = 0; x < a; x++)
            for (y = 0; y < a; y++)
            {
                z = a - (x + y);
                if ((x + y + z == a) && (15*x + 9*y + z == b*3))
                {
                    cnt++;
                    ans1[t]=x;
                    ans2[t]=y;
                    ans3[t]=z;
                    t++;
                }
            }
        cout<<cnt<<endl;
        for(int j=0; j<t; j++)
        {
            cout<<ans1[j]<<" "<<ans2[j]<<" "<<ans3[j]<<endl;
        }

    }
}
