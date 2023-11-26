#include <bits/stdc++.h>

using namespace std;

int main()
{
    //freopen("input.inp","r", stdin);
    //freopen("output.out","w",stdout);
    //input
    int n;
    string s;
    cin >> n >> s;
    //begin here
    //cho het vao map de tinh so luong cua tung buoc di rieng biet trong mang
    int u = 0, d = 0, l = 0, r = 0;
    for(int i = 0; i < n; i++){
        switch (s[i])
        {
        case 'U':
            u++;
            break;

        case 'D':
            d++;
            break;
        case 'L':
            l++;
            break;
        case 'R':
            r++;
            break;
        }
    }
    //lay R - L va U - D sau do lay tong cua chung tru di tong phan tu trong xau
    int a = abs(r-l);
    int b = abs(u-d);
    cout << n - a - b;
}
