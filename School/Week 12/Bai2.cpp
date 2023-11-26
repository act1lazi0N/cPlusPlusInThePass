#include<bits/stdc++.h>
using namespace std;


int prime[1000000+1];
void sang()
{
    for(int i = 0; i <= 1000000; i++)
    {
        prime[i] = 1;
    }
    prime[0] = prime[1] = 0;
    for(int i = 2; i <= sqrt(1000000); i++)
    {
        if(prime[i])
        {
            for(int j = i * i; j <= 1000000; j += i)
            {
                prime[j] = 0;
            }
        }
    }
}

int main()
{
    int n;
    cin >> n;
    int ans = 0;
    int a[1001];
    for(int i = 0; i < n; i++)
    {
        cin >> a[i];
        sang();
        for(int j = 0; j < a[i]/2; j++)
        {
            if(prime[j])
            {
                int bd = a[i] - j;
                if(prime[bd])
                {
                    cout << j << " " << bd << endl;
                }
            }
        }
    }




}
