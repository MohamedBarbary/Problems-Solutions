#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define endl '\n';
void init() {
    cin.tie(0);
    cin.sync_with_stdio(0);
}
void solve () {
      int n;
      cin>>n;
         string s1;cin>>s1;
          string s2;cin>>s2;
           int b=1;
           if(s1==s2){cout << "YES" << endl;}
           else if(n==1&&s1!=s2){
               cout  << "NO" << endl;
           }else {
               for (int i = 0; i < n - 1; i++) {
                   if (s1[i] == s2[i]) {
                       b = 1;
                   } else if (s2[i] == 'c' && s1[i] == 'b') {
                       int k = i + 1;
                       int z = 0;
                       for (; k < n; k++) {
                           if (s1[k] == 'c') {
                               z = 1;
                               break;
                           } else if (s1[k] == 'a') { break; }
                       }
                       if (z) {
                           swap(s1[i], s1[k]);
                       } else {
                           b = 0;
                           break;
                       }
                   } else if (s2[i] == 'b' && s1[i] == 'a') {
                       int k = i + 1;
                       int z = 0;
                       for (; k < n; k++) {
                           if (s1[k] == 'b') {
                               z = 1;
                               break;
                           } else if (s1[k] == 'c') { break; }
                       }
                       if (z == 1) {
                           swap(s1[i], s1[k]);
                       } else {
                           b = 0;
                       }
                   }else {b=0;}
                   if(!b){break;}
               }
                 if(s1[n-1]==s2[n-1]&&b){b=1;}else b=0;
               if (b) { cout << "YES" << endl; }
               else cout << "NO" << endl;
           }
           }
int main() {
    init();
    int t;
    cin>>t;
     while(t--) {
         solve();
     }
}