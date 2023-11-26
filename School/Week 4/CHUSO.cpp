#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long N, n;
    long long sum = 0;
    long long = 0;
    cin >> N;
    while(N>=10){
        N/=10;
        dem++;
    }
    while (n != 0) {
        sum += n % 10;
        n /= 10;
    }
    cout << dem+1 << " " << sum;
    return 0;

}
