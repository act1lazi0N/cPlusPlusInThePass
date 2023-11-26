    #include<bits/stdc++.h>
    using namespace std;
    int n;
    bool kiemtra(int t)
    {
        int a[4];
        for (int i = 0; i < 4; i ++)
        {
            a [i] = t % 10;
            t = t / 10;
        }
        for (int i = 0;i < 4; i ++)
        {
            for (int j = i + 1; j < 4; j ++)
            {
                if (a [i] == a [j])
                    return false;
            }
        }
        return true;
    }
    int main()
    {
        int n;
        cin >> n;
        for (int i = n + 1;i < 9999; i ++)
        {
            if (kiemtra(i) == true)
            {
                cout << i; return 0;
            }
            else
                continue;
        }
    }
