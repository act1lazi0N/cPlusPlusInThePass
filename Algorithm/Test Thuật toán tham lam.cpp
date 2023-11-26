#include<bits/stdc++.h>
using namespace std;
// bai toan cai tui

struct stuff
{
    char Ten[20];
    float Weight, Price, Bill;
    int Pa;
};
void Billp (stuff sp[], int n)
{
    for (int i = 1; i <= n; i++)
    {
        sp[i].Bill = sp[i].Price / sp[i].Weight;
    }

}
void Sapxep(stuff sp[], int n)
{
    for (int i= 1; i <= n; i++)
    {
        for (int j = i + 1; j <= n; j++)
        {
            if (sp[i].Bill < sp[j].Bill)
            {
                swap(sp[i], sp[j]);
            }
        }
    }
}
void thamlam(stuff sp[], int n, float W)
{
    for (int i = 0; i < n; i++)
    {
        sp[i].Pa = W / sp[i].Weight;
        W -= sp[i].Pa * sp[i].Weight;
    }
}
