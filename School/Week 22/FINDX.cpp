#include<bits/stdc++.h>
using namespace std;
vector<int> v;
int cnt = 0;
int main()
{
    ios::sync_with_stdio(false);
    cout.tie(0);
    cin.tie(0);
    char x;
    cin >> x;
    string s;
    cin.ignore();
    getline(cin, s);
    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] == x)
        {
            cnt++;
            v.push_back(i);
        }
    }
    cout << cnt << "\n";
    for(auto n : v)
    {
        cout << n << " ";
    }
    return 0;
}

