#include<bits/stdc++.h>
using namespace std;

int main()
{
	int t; cin >> t;
	cin.ignore();
	while(t--){
		string s;
		getline(cin, s);
		map<char, int> mp;
		for(char x : s){
			mp[x]++;
		}
		int ans = s.length();
		for(auto it : mp){
			ans += it.second * (it.second - 1) / 2;
		}
		cout << ans << endl;
	}
	return 0;
}
