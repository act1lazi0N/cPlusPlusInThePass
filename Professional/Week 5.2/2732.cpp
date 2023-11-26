#include<bits/stdc++.h>
using namespace std;
int n;
string s;
int main()
{
    int T;
    cin >> T;
    while(T--)
    {
        string ans;
        cin >> n >> s;
        for (int i = n - 1; i >= 0; i--)
        {
            if (i < 2 || s[i]!='0')
            {
                ans += (s[i]-'0'-1+'a');
            }
            else
            {
                string nb;
                nb += s[i-2];
                nb += s[i-1];
                int x = stoi(nb); // chuyen doi xau sang so nguyen
                i-=2;
                ans += ('a' + x - 1);
            }

        }
        reverse(ans.begin(), ans.end());
        cout << ans << "\n";
    }
}
