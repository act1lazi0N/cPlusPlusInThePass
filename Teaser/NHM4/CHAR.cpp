#include<bits/stdc++.h>
using namespace std;
#define SIZE 26
void found(string s)
{
    int n = s.size();
    int freq[SIZE];
    memset(freq, 0, sizeof(freq));
    for (int i = 0; i < n; i++)
    {
        freq[s[i] - 'a']++;
    }
    for (int i = 0; i < n; i++)
    {
        if (freq[s[i] - 'a'] != 0)
        {
            cout << s[i] << " " << freq[s[i] - 'a'] << endl;
            freq[s[i] - 'a'] = 0;
        }
    }
}


int main()
{
    string s;
    getline(cin, s);
    found(s);

}
