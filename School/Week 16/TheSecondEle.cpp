#include<bits/stdc++.h>
#include<vector>
using namespace std;
void removing(vector<int> &n)
{
    auto end = n.end();
    for (auto it = n.begin(); it != end; ++it)
    {
        end = remove(it + 1, end, *it);
    }
    n.erase(end, n.end());
}
int main()
{
    int t;
    cin >> t;
    vector<int> n(t);
    for (int i = 0; i < t; i++)
    {
        cin >> n[i];
    }
    removing(n);
    sort(begin(n), end(n), greater<int>());
    cout << n[1];
}
