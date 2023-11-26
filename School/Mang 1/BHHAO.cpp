#include<bits/stdc++.h>
using namespace std;
bool check(int n)
{
    if(n < 2) {
        return false;
    }
    int sum = 1;
    int bound = (int)sqrt(n);
    for (int i = 2; i <= bound; i++) {
        if(n % i == 0) {
            if(n / i == i) {
                sum += i;
            } else {
                sum += i;
                sum += n / i;
            }
        }
    }
    return sum == n;
}
int main()
{
    int n;
    int a[10001];
    cin >> n;
    int dem = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    for (int i = 0; i < n; i++)
    {
        if (check(a[i]))
        {
            dem++;
        }
    }
    cout << dem;
}
