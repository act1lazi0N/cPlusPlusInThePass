#include<bits/stdc++.h>
using namespace std;
void chuanhoa(string &s)
{
    s[0] = toupper(s[0]);
    for (int i = 0; i < s.length(); i++)
    {
        s[i] = tolower(s[i]);
    }
}
int main()
{
    int t; cin >> t;
    cin.ignore();
    while(t--)
    {
        string s;
        getline(cin, s);
        for (int i = 0; i < s.length(); i++)
        {
            s[i] = tolower(s[i]);
        }
        vector<string> v;
        stringstream ss(s);
        string tmp;
        while (ss >> tmp)
        {
            v.push_back(tmp);
        }
        chuanhoa(v[v.size() - 1]);
        cout << v[v.size() - 1] << ", ";
        for (int i = 0; i < v.size() - 1; i++)
        {
            chuanhoa(v[i]);
            cout << v[i];
            if (i != v.size()-2) cout << " ";

        }
        cout << endl;
    }
    return 0;
}
