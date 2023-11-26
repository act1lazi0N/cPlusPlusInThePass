#include<bits/stdc++.h>
using namespace std;
stack<char> st;
char c;
int check(string s)
{
    for (int i = 0; i < s.length(); i++)
    {
        if (s[i] == '(')
        {
            st.push(i);
        }
        else if (s[i] == ')')
        {
            if (st.empty())
                return 1;
            c = st.top();
            if (c != '(')
            st.pop();
        }
        else if (s[i] != '(' && s[i] != ')')
        {
            return 2;
        }
    }
    if (!st.empty()) return 1;
    return 0;
}


int main()
{
    string s;
    getline (cin, s);

    if (check(s) == 0)
    {
        cout << "DUNG";
    }
    else if (check(s) == 1)
    {
        cout << "KHONG DUNG";
    }
    else if (check(s) == 2)
    {
        cout << "KHONG HOP LE";
    }



}
