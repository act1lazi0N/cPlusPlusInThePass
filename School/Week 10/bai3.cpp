#include<bits/stdc++.h>
using namespace std;

int main()
{
    int d = 0;
    string s;
    cout << "Nhap chuoi: "; getline(cin, s);
    for (int i = 0; i < s.length(); i++)
    {
        if (s[i] >= 'A' && s[i] <= 'Z')
        {
            d++;
        }
    }
    cout << "Trong chuoi co: " << d << " ky tu in hoa" << endl;
    cout << "So luong nhu sau: ";
    char str[26];
    int a[26] = {0};
    for (int i = 0; i < s.length(); i++)
    {
        for (int j = 0; j < 26; j++)
        {
            if (s[i] == str[j])
            {
                a[j]++;
            }
        }
    }

}
