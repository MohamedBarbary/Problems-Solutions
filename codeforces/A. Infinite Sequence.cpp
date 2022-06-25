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
// math and number theory azher and assiut sheet and read athors in solution
// up solving rounds and read solutions
// important thing how to think // think twice code once
typedef long long ll;
int main () {
    init();
         ll a,b,c;
          cin>>a>>b>>c;
    if (a==b){cout <<"YES"<<endl;return 0;}
    if (a>b&&c>=0){cout <<"NO";return 0;}
    else if(a>b&&c<0){
           ll res = abs(a-b);
       if (res%c==0){cout << "YES"<<endl;}else cout<<"NO"<<endl;
        return 0;
    }
    if (a<b&&c<=0){cout <<"NO";return 0;}
    else if(a<b&&c>0){
        ll res = abs(a-b);
        if (res%c==0){cout << "YES"<<endl;}else cout<<"NO"<<endl;
        return 0;
    }
}