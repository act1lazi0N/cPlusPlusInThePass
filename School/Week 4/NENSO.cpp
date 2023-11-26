#include<bits/stdc++.h>
using namespace std;

int main()
{

    char n[11];
    int sum;
    cin>>n;
         sum = 0;
         int t = strlen(n) -1;
         for(int j=0;j<=t;++j)
            sum += n[j]-48;
         while( sum >=10)
         {
           sum = sum/10 + sum%10;
         }
         cout << sum;
    return 0;

}
