#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define endl '\n';
void init() {
    cin.tie(0);
    cin.sync_with_stdio(0);
}
int main() {
    init();
    int t;
    cin >> t;
    while (t--){
        int n;cin>>n;
        ll arr[n];
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        if(n%2==1){
            cout << "NO" << endl;
        }else {
            sort(arr,arr+n);
            vector<ll>v;
            for(int i=0 ;i<n/2 ;i++){
                v.push_back(arr[i]);
                v.push_back(arr[i+(n/2)]);
            }
            int b=0;
            if(((v[0]>v[1]&&v[0]>v[n-1])||(v[0]<v[1]&&v[0]<v[n-1]))
               &&(((v[n-2]>v[n-1]&&v[0]>v[n-1])||(v[n-2]<v[n-1])&&v[0]<v[n-1]))){
                b=1;
            }
            if(b){
                for(int i=1;i<n-1;i++ ){
                    if((v[i]>v[i+1]&&v[i]>v[i-1])||
                       v[i]<v[i-1]&&v[i]<v[i+1]){
                        b=1;
                    }else {b=0;break;}
                }
                if(b) {
                    cout << "YES" <<endl;
                    for (int i = 0; i < n; i++) {
                        cout << v[i] << " ";
                    }
                    cout << endl;
                }else cout << "NO" << endl;
            }else cout << "NO" << endl;
        }
    }
}