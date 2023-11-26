#include<bits/stdc++.h>
using namespace std;

void sum(string a, string b)
{
    if (a.length() < b.length())
        swap(a, b);
    int n = a.length(), m = b.length();
    reverse(a.begin(), a.end());
    reverse(b.begin(), b.end());
    b += string(n - m, '0');
    string res = "";
    int rmb = 0;
    for (int i = 0; i < n; i++)
    {
        int tmp = (a[i] - '0') + (b[i] - '0') + rmb;
        res += (char)(tmp % 10 + '0');
        rmb = tmp /= 10;
    }
    if(rmb) res += (char)(rmb + '0');
    reverse(res.begin(), res.end());
    return res;
}
bool kt(string s, int l, int len1, int len2)
{
    string s1 = s.substr(l, len1);
	string s2 = s.substr(l + len1, len2);
	string s3 = sum(s1, s2);
	if(size(s3) > (size(s) - len1 - len2 - l) return false;
	if(s.substr(l + len1 + len2, size(s3)) == s3){
		if(l + len1 + len2 + size(s3) == size(s)) return true;
		return kt(s, l + len1, len2, size(s3));
	}
	return false;
}
void TC(){
	string s; cin >> s;
	bool ok = false;
	for(int i = 1; i< s.length(); i++){
		for(int j = 1 ; j < s.length() - i; j++){
			if(kt(s, 0, i, j)){
				cout <<"Yes\n";
				return;
			}
		}
	}
	cout << "No\n";
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    int t;
    cin >> t;
    while(t--)
    {
        TC();
    }
    return 0;
}
