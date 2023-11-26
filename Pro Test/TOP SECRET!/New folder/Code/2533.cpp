#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main(){
    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    freopen("2533.inp","r",stdin);
    freopen("2533.out","w",stdout);
    int r,g;
    cin>>r>>g;
    /*
    gọi h là số tầng tối đa được xây bởi r khối đỏ và g khối xanh
    có: 1+2+...+h=r+g <=> h(h+1)/2=r+g <=> h^2+h-2(r+g)=0
    <=> h=(-1-sqrt(1+8(r+g)))/2<0 => loại
        h=(-1+sqrt(1+8(r+g)))/2>0 => lấy
    */
    int h=floor((-1+sqrt(1+8*(r+g)))/2);

    /*
    gọi dp[i][j] là số cách xây dựng h với i tầng và có đúng j khối đỏ
    khởi tạo:
        + dp[0][0]=1;
        + dp[0][j]=0 với j=1,2...,r;
    truy hồi:
        + dp[i][j]=dp[i-1][j] nếu i>j (tầng 1 có i khối màu xanh)
        + dp[i][j]=dp[i-1][j]+dp[i-1][j-i] nếu i<=j
    bộ nhớ để khai báo cho dp[i][j] là h*r*4(byte)<=893*2*10^5*4=714400000 byte=87207 mb
    => vượt quá 512mb(giới hạn đề)
    trong công thức tính dp chỉ cần lưu 2 hàng liên tiếp
    */
    int dp[2][200005],k=0;
    dp[0][0]=1;
    for(int j=1;j<=r;j++)dp[0][j]=0;
    for(int i=1;i<=h;i++){
        k=1-k;
        for(int j=0;j<=r;j++){
            if(i>j)dp[k][j]=dp[1-k][j];
            else dp[k][j]=(dp[1-k][j-i]+dp[1-k][j])%1000000007;
        }
    }
    /*
    kết quả bài là xích-ma(dp[h][j]) với j=max(h*(h+1)/2-g,0),...,r
    */
    int ans=0;
    for(int j=max(h*(h+1)/2-g,0);j<=r;j++)
        ans=(ans+dp[k][j])%1000000007;
    cout<<ans;
}
