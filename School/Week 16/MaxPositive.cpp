#include<bits/stdc++.h>
using namespace std;

int t;
long long n, h = 1e+9;
double x, T;
int main()
{
    cin >> t;
    while(t--)
    {
        n = 0; T = 0;
        cin >> x;
        while(T < x && (x >= 1.0 && x <= 10.0))
        {
            n++;
            T += (float)1/(2*(n%h)-1);
        }
        cout << n%h << "\n";
    }
}
