#include<bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    getline(cin, s);
    string word; cin >> word;
    stringstream ss(s);
    string token;
    vector<string> v;
    while(ss >> token)
    {
        if (token != word)
        {
            v.push_back(token);
            cout << token << " ";
        }
    }
    cout << endl;
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i];
        if (i != v.size()-1)
        {
            cout << " ";
        }
    }
    return 0;
}
