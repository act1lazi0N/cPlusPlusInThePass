#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef pair<int,int> ii;
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
#define faster ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);


const int N = 3e5+5;
const int M = 1e5+5;

struct data
{
    int idx, x, y;
    bool operator < (const data &o) const
    {
        return x < o.x || (x == o.x && y < o.y);
    }
};

int n, t[M], res[N];
data a[N];

int retreive(int x)
{
    int ans = 0;
    for (; x>0; x-=x&-x) ans += t[x];
    return ans;
}

void update(int x, int v)
{
    for (; x<M; x+=x&-x) t[x] += v;
}

int main()
{
    cin >> n;
    for (int i=1; i<=n; i++)
    {
        int x, y;
        cin>>x>>y;
        a[i] = { i, x, y };
    }

    sort(a+1, a+n+1);

    int i, j;
    for (i=1; i<=n; i=j+1)
    {
        for (j=i; j<n && a[i].x == a[j+1].x && a[i].y == a[j+1].y; j++);
        int cnt = retreive(a[i].y);
        FOR(k,i,j) res[a[k].idx] = cnt;
        update(a[i].y, j-i+1);
    }
    cout<<res[1];
    for (i=2; i<=n; i++) cout<<" "<<res[i];

    return 0;
}
