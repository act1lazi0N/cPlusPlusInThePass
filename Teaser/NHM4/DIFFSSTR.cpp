#include<bits/stdc++.h>
using namespace std;
int check(string s, int l) // kiểm tra đầu cuối tương ứng
{
    for (int i = 0; i <= s.length() - l; i++)
    {
        string s1 = s.substr(i, l); // string s1 = phương thức chuỗi con giữa i và l
        if (s.find(s1) != s.rfind(s1))
            return 1; //sai
    }
    return 0; //đúng
}
int main()
{
    int n, minn = INT_MAX;
    cin >> n;
    string s;
    cin >> s;
    int l = 1, r = n; // Phương thức tìm kiếm nhị phân
    while (l <= r)
    {
        int mid = (l + r) / 2;
        if (check(s,mid) == 0) // nếu chuỗi đầu và chuỗi cuối tìm được nhau
        {
            minn = min(mid, minn); //tìm giá trị nhỏ nhất
            r = mid - 1; // giả dụ 7 = 4 - 1
        }
        else l = mid + 1; // không thì độ dài nhỏ nhất bằng số đã tìm thấy + 1 (Ví dụ 1 = 4 + 1)
    }
    cout << minn;
}
