#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define endl '\n';
void init() {
    cin.tie(0);
    cin.sync_with_stdio(0);
}
void solve () {
    int n,m;
    cin >> n>>m;
    string s;cin>>s;
       int mx=-1;int cnt=0;
       for(int i=0;i<n;i++){
           if(s[i]=='B'){
               cnt++;
           }else { mx=max(cnt,mx);cnt=0;}
       } mx=max(cnt,mx);
          if(mx>=m){cout << 0 << endl;}else cout << m-mx<<endl;
}
int main() {
    init();
             int t;cin>>t;
             while(t--){
                 solve();
             }
}