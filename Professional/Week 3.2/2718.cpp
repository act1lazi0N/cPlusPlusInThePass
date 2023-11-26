#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        set<char> st;
        for (int i = 1; i <= 4; i++)
        {
            char c;
            cin >> c;
            st.insert(c);
        }
        cout << st.size() - 1 << "\n";
    }
    return 0;
}
