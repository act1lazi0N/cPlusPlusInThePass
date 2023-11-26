#include<bits/stdc++.h>
using namespace std;
void vietHoa(string &x)
{
    x[0] = toupper(x[0]);
    for(int i = 1; i < x.length(); i++)
    {
        x[i] = tolower(x[i]);
    }
}

int main()
{
    int t;
    cin >> t;
    cin.ignore();
    while(t--)
    {
        string s;
        getline(cin, s);
        for(char &x : s) x = toupper(x);
        stringstream ss(s);
        vector<string> v;
        string tmp;
        while(ss >> tmp)
        {
            v.push_back(tmp);
        }
        for(int i = 0; i < v.size() - 1; i++)
        {
            vietHoa(v[i]);
            cout << v[i];
            if(i != v.size() - 2) cout << " ";
            else cout << ", ";
        }
        cout << v.back() << endl;
    }
    return 0;
}
