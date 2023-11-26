#include<bits/stdc++.h>
using namespace std;

int main()
{

    string s, a[201];
    int n = 0;
    while(getline(cin, s))
    {
        n++;
        a[n]=s;
    }
    for(int i = 1; i < n; i++)
    {
        for(int j = i + 1; j <= n; j++)
        {
            if ((a[i] + a[j])< (a[j] + a[i])) swap(a[i], a[j]);
        }
    }
    for (int i = 1; i <= n; i++)
    {
        cout << a[i];
    }
//    int n, a[201];
//    cin >> n;
//    for (int i = 0; i < n; i++)
//    {
//        cin >> a[i];
//    }
//    int Max = 0;
//    int idx = 0;
//    for (int i = 0; i < n; i++)
//    {
//        int num = a[i];
//        while(num!= 0)
//        {
//            int r = num % 10;
//            num /= 10;
//            if (num == 0)
//            {
//                if (Max < r)
//                {
//                    Max = r;
//                    idx = i;
//                }
//            }
//        }
//    }
//    for (int i = idx; i < n; i++)
//    {
//        cout << a[i];
//    }
//    for (int i = 0; i < idx; i++)
//    {
//        cout << a[i];
//    }
}
