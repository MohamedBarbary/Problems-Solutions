#include <bits/stdc++.h>
using namespace std;
#define endl '\n';
#define loop(n)    for(int i=0;i<n;i++)
#define loopl(n)   for(long i=0;i<n;i++)
#define loop1(n)    for(int j=0;j<n;j++)
#define loop2(n1,n2)   for(int i=0,j=0;i<n1,j<n2;i++,j++)
#define loopr(n)        for(int i=n-1;i>=0;i--)
#define cout(n)        cout << n << endl;
#define couts(n)        cout<<n<<" ";
void init(){
    cin.tie(0);
    cin.sync_with_stdio(0);
}
int main() {
    vector <long long >v;
    long long p=2;
    while(p<=(2*1000000000)){
        v.push_back(p);
        p*=2;
    }
    map<long long ,long long >mp;
    int n;cin>>n;
    long long arr[n];
    loop(n){
        cin>>arr[i];
        mp[arr[i]]++;
    }
    long long cnt=0;
    for(int i=0;i<n;i++){
        long long k=arr[i];
        for(int j=0;j<v.size();j++){
            long long x=v[j]-k;

            if(mp[x]){
                //      cout <<x<<" ";
                if(x==k){
                    cnt+=(mp[x]-1);
                }else cnt+=mp[x];
            }
        }
    }
    cout << cnt/2<<endl;
    return 0;
}