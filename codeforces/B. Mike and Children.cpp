
#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <iomanip>
using namespace std;
#define endl '\n';
#define loop(n)    for(int i=0;i<n;i++)
#define loop1(n)    for(int j=0;j<n;j++)
#define loop2(n1,n2)   for(int i=0,j=0;i<n1,j<n2;i++,j++)
#define loopr(n)        for(int i=n-1;i>=0;i--)
typedef long long ll;
typedef long l;
typedef vector<int> vi;
ll fre[10000000];
void init(){
    cin.tie(0);
    cin.sync_with_stdio(0);
}
int main (){
    int n; cin>>n;
    l v[n];
    loop(n){
        cin>>v[i];
    }
    loop(n){
        for(int j=i+1;j<n;j++){
            fre[v[i]+v[j]]++;
        }
    }
    ll max =-111;

    loop(n){
        for(int j=i+1;j<n;j++){
            if(fre[v[i]+v[j]]>max){
                max=fre[v[i]+v[j]];
            }
        }
    } cout << max << endl;
}