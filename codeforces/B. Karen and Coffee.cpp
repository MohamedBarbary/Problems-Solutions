#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <iomanip>
#include <cmath>
#include <math.h>
#include<string>
#include<queue>
using namespace std;
#define loop(n)    for(int i=0;i<n;i++)
#define loop1(n)    for(int j=0;j<n;j++)
#define loop2(n1,n2)   for(int i=0,j=0;i<n1,j<n2;i++,j++)
#define loopr(n)        for(int i=n-1;i>=0;i--)
typedef long long ll;
typedef long l;
typedef string ss;
typedef vector<int> vi;
typedef vector<long> vl;
void init(){
    cin.tie(0);
    cin.sync_with_stdio(0);
}
ll pre[2000001]={0};
int main()
 {
	init();
     long x,y,z;cin>>x>>y>>z;
       while(x--){
    	   int n,m;cin>>n>>m;
    	    pre[n]++;pre[m+1]--;
       }
             for(long i=1;i<=200000;i++){
                   pre[i]+=pre[i-1];
             }
             for(long i=0;i<=200000;i++){

            	 if(pre[i]>=y){pre[i]=1;}
            	 else{ pre[i]=0;}
             }
             for(long i=1;i<=200000;i++){
            	 pre[i]+=pre[i-1];

             }

               while(z--){
            	   int n,m;cin>>n>>m;
            	      cout <<pre[m]-pre[n-1] <<endl;
               }
 }