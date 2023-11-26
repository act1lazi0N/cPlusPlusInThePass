#include<bits/stdc++.h>
#include<vector>
using namespace std;
int main()
{
    int t;
    cin >> t;
    vector<int> n(t);
    for (int i = 0; i < t; i++)
    {
        cin >> n[i];
    }
    cout << *max_element(begin(n), end(n));

}
