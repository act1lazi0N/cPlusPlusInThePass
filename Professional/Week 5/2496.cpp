#include <bits/stdc++.h>

using namespace std;

int main()
{
    //freopen("input.inp","r",stdin);
    //freopen("output.out","w",stdout);


    int n, k;
    cin >> n >> k;
    bool off[1000001];                                  //off[i] = true || false neu bong den i la tat hoac bat
    memset(off, false, sizeof(off));
    int ans = 0;                                        //so bong den tat nhieu nhat o mot thoi diem
    int dem = 0;
    for(; k > 0; k--)
    {
        int i;
        cin >> i;
        for(int j = i; j <= n; j += i)
        {
            off[j] = !off[j];
            if(off[j])
                dem++;
            else
                dem--;
        }
        ans = max(ans,dem);
    }
    cout << ans;
}
