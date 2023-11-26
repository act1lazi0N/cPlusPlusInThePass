#include<bits/stdc++.h>
using namespace std;
int t, n[100001];
long long int s = 0;
int main()
{
    int t;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        cin >> n[i];
        s += n[i];
    }
    cout << s;

}
