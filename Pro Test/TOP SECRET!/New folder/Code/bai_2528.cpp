
#include<iostream>
#include<algorithm>
#include<stdio.h>
#include<math.h>
#include<string>
#include<vector>
#include<map>

typedef long long ll;
typedef unsigned long long ull;

#define X first
#define Y second
#define pb push_back
#define mp make_pair
#define ep emplace_back
#define EL printf("\n")
#define sz(A) (int) A.size()
#define FOR(i,l,r) for (int i=l;i<=r;i++)
#define FOD(i,r,l) for (int i=r;i>=l;i--)
#define fillchar(a,x) memset(a, x, sizeof (a))
#define faster

using namespace std;

int original_array[2002],imitation_array[2002];
int n,example_check=0,count_sit_1=0,count_sit_2=0;

inline void value_permutation(int& first_number,int& second_number)
{
    int copy_number=first_number;
    first_number=second_number;
    second_number=copy_number;
}

int min_number(int first_number,int second_number)
{
    if(first_number<second_number)
    {
        return first_number;
    }
    else
    {
        return second_number;
    }
}
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin>>n;
    for(int i=1; i<=2*n; i++)
    {
        cin>>original_array[i];
        if(original_array[i-1]>original_array[i])
        {
            example_check=1;
        }
        imitation_array[i]=original_array[i];
    }
    if(example_check==0)
    {
        cout<<"0";
    }
    else
    {
        while(count_sit_1<=2*n)
        {
            count_sit_1++;
            if(count_sit_1%2==0)
            {
                for(int i=1; i<=n; i++)
                {
                    value_permutation(original_array[i],original_array[n+i]);
                }
            }
            else
            {
                for(int i=1; i<=2*n-1; i+=2)
                {
                    value_permutation(original_array[i],original_array[i+1]);
                }
            }
            example_check=0;
            for(int i=1; i<=2*n-1; i++)
            {
                if(original_array[i]>original_array[i+1])
                {
                    example_check=1;
                    break;
                }
            }
            if(example_check==0)
            {
                break;
            }
        }
        while(count_sit_2<=2*n)
        {
            count_sit_2++;
            if(count_sit_2%2==1)
            {
                for(int i=1; i<=n; i++)
                {
                    value_permutation(imitation_array[i],imitation_array[n+i]);
                }
            }
            else
            {
                for(int i=1; i<=2*n-1; i+=2)
                {
                    value_permutation(imitation_array[i],imitation_array[i+1]);
                }
            }
            example_check=0;
            for(int i=1; i<=2*n-1; i++)
            {
                if(imitation_array[i]>imitation_array[i+1])
                {
                    example_check=1;
                    break;
                }
            }
            if(example_check==0)
            {
                break;
            }
        }
        if(count_sit_2>=2*n &&count_sit_1>=2*n)
        {
            cout<<"-1";
        }
        else
        {
            cout<<min_number(count_sit_1,count_sit_2);
        }
    }
}
