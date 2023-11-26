#include<bits/stdc++.h>
using namespace std;
#define ll long long
const int M = 1000000007;

unsigned ll pow(int a, int b)
{
    if(b == 0)
    {
        return 1;
    }
    ll x = pow(a, b / 2);
    if(b % 2 == 1)
    {
        return x * x * a;
    }
    else return x * x;
}
int main()
{
    unsigned int a, b;
    cin >> a >> b;
    cout << pow(a, b)%M;
}
