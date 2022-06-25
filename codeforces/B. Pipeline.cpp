#include<bits/stdc++.h>
using namespace std;
#define endl '\n';
#define loop(n)    for(int i=0;i<n;i++)
#define loopl(n)   for(long i=0;i<n;i++)
#define loop1(n)    for(int j=0;j<n;j++)
#define loop2(n1,n2)   for(int i=0,j=0;i<n1,j<n2;i++,j++)
#define loopr(n)        for(int i=n-1;i>=0;i--)
typedef long long ll;
void init() {
    cin.tie(0);
    cin.sync_with_stdio(0);
}
typedef long long ll;
// First read problem code
// second draw it
// third think then think again
// check your code then write code
// don`t forget that
ll sum (ll n){
    return (n*(n+1))/2;
}
ll sumf (ll i , ll j ){
    if (i<=1){return sum(j);}
    return sum(j)-sum(i-1);
}
ll bin (ll n ,ll m){
    ll l=1;ll r=m;
    ll mid;ll ans=0;
    while (l<r) {
        mid = l + (r - l) / 2;
        ll var = sumf(mid, m);
        if (var == n) {
            return m - mid +1;
        } else if (var > n) {
            l = mid+1;
        } else {
            ans = mid;
            r= mid;
        }
    }
    return m-ans+2;
}
int main () {
    init();
    ll n,k;
    cin>>n>>k;
    if (n==1){cout << 0 << endl;return 0;}
    if (k>=n){
        cout << 1<<endl;return 0;
    }else if (k+1==n){cout <<2<<endl;return 0;}
    n--;k--;
    if (sum(k)<n){
        cout << -1<<endl;
    }
    else {
        cout << bin(n,k)<<endl;
    }
}