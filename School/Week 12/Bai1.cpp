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
int main()
{
    int t;
    int a[100001];
    cin >> t;
    int i = 0;
    for(int i = 0; i < t; i++)
    {
        cin >> a[i];
    }
    sang();
    for(int i = 0; i < t; i++)
    {
        if(prime[a[i]])
        {
            cout << "YES\n";
        }
        else
        {
            cout << "NO\n";
        }

    }

}
