#include<bits/stdc++.h>
using namespace std;

int main()
{
    int TC;
    cin >> TC;
    cin.ignore();
    while(TC--)
    {
        string s;
        getline(cin, s);
        stringstream ss(s);
        vector<string> v;
        string word;
        while(ss >> word)
        {
            v.push_back(word);
        }
        for (int i = v.size()-1; i >= 0; i--)
        {
            cout << v[i] << " "
        }
        cout << endl;

    }
    return 0;
}
