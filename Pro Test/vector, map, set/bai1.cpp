#include<bits/stdc++.h>
using namespace std;
using ll = long long;

#define fi first;
#define se second;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    int n; cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
//    for (int i = v.size() + 1; i >= 0; i--)
//    {
//        cout << v[i] << " ";
//    }
    for (auto it = v.begin(); it != v.end(); it++)
    {
        cout << *it << " ";
    }
    cout << endl;
    auto it = v.end();
    --it;
    while(it != v.begin())
    {
        cout << *it << " ";
        --it;
    }
    cout << *it << endl;

}
