#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <iomanip>
#include <set>
#include <map>
#include<cmath>
#include<math.h>
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
int main (){
    init();
    long long  x,y,z,k;cin>>x>>y>>z>>k;
    if(y>x&&k<x*z){x=y;}
    cout << min({(((x/y)*k)+((x%y)*z)),(x*z),(((x/y)*k)+k)});
}
