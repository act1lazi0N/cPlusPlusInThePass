#include<bits/stdc++.h>
using namespace std;
int wordcount(string s)
{
    int counter = 0;
    stringstream str(s);
    string ss;
    while (str >> ss)
    {
        counter++;
    }
    return counter;
}
int main()
{
    string s;
    getline(cin, s);
    int dem = (s[0] !=  ' ');

    cout << wordcount(s) << "\n";
    for (int i = 0; i < s.length(); i++)
    {
        if (s[i] == ' ')
        {
            cout << "\n";
        }
        if (s[i] != ' ')
        cout << s[i];
    }
    return 0;
}
