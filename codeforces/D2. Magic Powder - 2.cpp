#include<bits/stdc++.h>
using namespace std;
#define endl '\n';
#define loop(n)    for(int i=0;i<n;i++)
#define loopl(n)   for(long i=0;i<n;i++)
#define loop1(n)    for(int j=0;j<n;j++)
#define loop2(n1,n2)   for(int i=0,j=0;i<n1,j<n2;i++,j++)
#define loopr(n)        for(int i=n-1;i>=0;i--)
#define cout(n)        cout << n << endl;
#define couts(n)        cout<<n<<" ";
typedef long long ll;
void init() {
    cin.tie(0);
    cin.sync_with_stdio(0);
}
vector <ll>v,v1;
bool can (ll t,ll k){
    bool b = true;
    for(int i=0;i<v.size();i++){
        if(v1[i]/v[i]<t) {
            ll var =t*v[i];
            ll var2=var-v1[i];
            if (var2<= k) {
                k =k-var2;
                b = true;
            }else {
                b = false;
                break;
            }
        }else b=true;
    }
    if (b) {
        return true;
    } else {
        return false;
    }
}
int main (){
    init();
    long n,k;cin>>n>>k;
    loopl(n){
        ll x;cin>>x;
        v.push_back(x);
    }
    loopl(n){
        ll x;cin>>x;
        v1.push_back(x);
    }
    ll l=0;ll r=2e9+1;
    ll mid;
    ll ans=0;
    while(l<=r){
        mid=(l+r)/2;
        if(can(mid,k)){
            ans=mid;l=mid+1;
        }else r=mid-1;
    }
    cout << ans<<endl;
}