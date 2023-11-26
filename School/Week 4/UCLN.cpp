#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long int N, M;
    long long int GCD;
    cin >> N >> M;
    for (int i = 1; i <= N && i <= M; i++)
    {
        if (N % i == 0 && M % i == 0)
        {
            GCD = i;
        }

    }
    cout << GCD << endl;;
    return 0;
}
