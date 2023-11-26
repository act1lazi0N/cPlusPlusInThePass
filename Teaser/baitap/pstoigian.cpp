#include<bits/stdc++.h>
using namespace std;

int main()
{
    int a,b;
    cin >> a >> b;
    cout << a/__gcd(a,b) << "/" << b/__gcd(a,b);
}
