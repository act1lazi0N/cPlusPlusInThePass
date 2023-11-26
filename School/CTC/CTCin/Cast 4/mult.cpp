#include<bits/stdc++.h>
using namespace std;

int main()
{
    int a, b, c, d, s, tong=0;
    cin >> a >> b;
    while(a != 0)
    {
        s = b;
        c = a % 10;
        a /= 10;
        while(s != 0)
            {
            d = s % 10;
            s /= 10;
            tong+=d*c;
            }
    }
   cout<<tong;

}
