#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

int main()
{
    freopen("input.inp", "r", stdin);
    freopen("output.out", "w", stdout);
    ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    while(true){
        int arr[13];
        for(int i = 1; i <= 12; i++)
            cin >> arr[i];
        sort(arr + 1, arr + 13);
        //kiem tra xem 12 so co phai la so 0 hay ko
        if(arr[1] == 0 && arr[12] == 0)
            break;
        //kiem tra xem 12 so nay co tao thanh hinh hop chu nhat hay ko
        if(arr[1] == arr[4] && arr[5] == arr[8] && arr[9] == arr[12])
            cout << "yes" << '\n';
        else
            cout << "no" << '\n';
    }
    return 0;
}
