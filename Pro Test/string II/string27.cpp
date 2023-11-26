#include<bits/stdc++.h>
using namespace std;
void solve(string s)
{
    string s;cin>>s;
	stack<int> st;
	string res = "";
	for(int i = 0; i <= s.length(); i++){
		st.push(i+1);
		if(i==s.length() || s[i]=='I'){
			while(!st.empty()){
				res += to_string(st.top());
				st.pop();
			}
		}
	}
	cout << res << endl;
}

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n;
        cin >> n;
        string s;
        cin >> s;
        solve(s);
    }
}
