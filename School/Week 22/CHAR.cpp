#include<bits/stdc++.h>
using namespace std;
#define SIZE 26
vector<int> v;
void found(string s)
{
    int n = s.size();
    int freq[SIZE];
    memset(freq, 0, sizeof(freq));
    for (int i = 0; i < n; i++)
    {
        v.push_back(freq[s[i] - 'a']);
    }
    for (int x : v)
    {
        if (freq[s[i] - 'a'] != 0)
        {
            cout << s[i] << " " << x << endl;
        }
    }
}


int main()
{
    string s;
    getline(cin, s);
    found(s);
}
