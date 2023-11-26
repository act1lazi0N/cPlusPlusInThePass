#include<bits/stdc++.h>

using namespace std;
int main()
{
    int h,i;
    string s;
    getline(cin,s);
    if(s[0]==' ') // nếu mảng kí tự đầu tiên có dấu cách
    {
        for(i=0; i<s.size(); i++) // vòng lặp xóa dấu cách thừa
        {
            if(s[i]!=' ') // nếu mảng kí tự i không có dấu cách
            {
                s.erase(0,i-0); // xóa các phần tử cách đi
                break;
            }
        }
    }
    if(s[0]>='a'&&s[0]<='z') // nếu mảng kí tự đầu tiên là kí tự thường
    {
        s[0]=s[0]-32; // trở thành kí tự hoa
    }
    for(int i=1; i<s.size(); i++)
    {
        if(s[i]>='A'&&s[i]<='Z') // nếu mảng kí tự i là kí tự hoa
        {
            s[i]=s[i]+32; // trở thành kí tự thường
        }
        else if(s[i]==' ') // hoặc nếu kí tự i là rỗng
        {
            for(int h=i; h <s.size(); h++) // vòng lặp xóa dấu cách thừa
            {
                if(s[h]!=' ') // nếu không có dấu cách
                {
                    s.erase(i,h-i-1); //  xoá từ đoạn dấu cách đầu tìm thấy đến đoạn có dấu cách
                    break;
                }
            }
        }
        if(s[i]!=' '&&s[i-1]==' ') //nếu kí tự i khác rỗng và i - 1 là rỗng (Tức là ở đằng sau kí tự là rỗng)
        {

            if(s[i]>='a'&&s[i]<='z') // nếu kí tự i là kí tự thường
            {
                s[i]=s[i]-32; // trở thành kí tự hoa
            }

        }

    }
    cout<<s;
}
