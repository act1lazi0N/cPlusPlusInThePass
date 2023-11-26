#include<bits/stdc++.h>
using namespace std;

int main()
{
    int a,b,c,d;
    cin >> a >> b >> c >> d;
    a = a * ((b * d / __gcd (b,d)) / b);
    c = c * ((b * d / __gcd (b,d)) / d);
    cout << a + c << "/" << (b * d / __gcd (b,d));
}
