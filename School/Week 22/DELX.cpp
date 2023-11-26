//#include<bits/stdc++.h>
//using namespace std;
//
//int main()
//{
//    ios::sync_with_stdio(false);
//    cout.tie(0);
//    cin.tie(0);
//    char x;
//    cin >> x;
//    cin.ignore();
//    string s;
//    getline(cin, s);
//    const char* str = s.c_str();
//    char *token = strtok(str, " ");
//    while(token != NULL)
//    {
//        if(strcmp(token, x) == 0)
//        {
//            cout << token;
//        }
//        token = strtok(NULL, " ");
//    }
//    cout << "\n";
//}
#include<bits/stdc++.h>
using namespace std;

char x;
string s;
int main()
{
    cin >> x;
    fflush(stdin);
    getline(cin, s);
    for (int i = 0; s[i] != '\0';i++)
    {
        if (s[i] == x)
        {
            int j;
            j = i;
            while(s[j+1] != '\0')
            {
                s[j] = s[j + 1];
                j++;
            }
            s[j] = '\0';
            i--;
        }
    }
    cout << s;
}
