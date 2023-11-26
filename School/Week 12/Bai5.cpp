#include<bits/stdc++.h>
using namespace std;

const int maxn = (int)1e7;
int prime[maxn+1];
void sang()
{
    for(int i = 0; i <= maxn; i++)
    {
        prime[i] = 1;
    }
    prime[0] = prime[1] = 0;
    for(int i = 2; i <= sqrt(maxn); i++)
    {
        if(prime[i])
        {
            for(int j = i * i; j <= maxn; j += i)
            {
                prime[j] = 0;
            }
        }
    }
}
int k = 100000000000;
int main()
{
    long long n;
    int dem = 0;
    cin >> n;
    sang();
    for(int i = 1; i <= sqrt(n); i++)
    {
        if(prime[i])
        {
            dem++;
        }
    }
    cout << dem;
}
