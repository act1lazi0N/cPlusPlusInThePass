#include<bits/stdc++.h>
using namespace std;
int bcnn(int a, int b)
{
    return a * b / __gcd(a, b);
}
int main()
{
    int a,b;
    cin >> a >> b;
    for (int i = bcnn (a,b) ; i <= a * b; i += bcnn (a,b))
    {
        cout << i << " ";
    }
}
