#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <iomanip>
#include <set>
#include <map>
using namespace std;
#define endl '\n';
#define loop(n)    for(int i=0;i<n;i++)
#define loopl(n)   for(long i=0;i<n;i++)
#define loop1(n)    for(int j=0;j<n;j++)
#define loop2(n1,n2)   for(int i=0,j=0;i<n1,j<n2;i++,j++)
#define loopr(n)        for(int i=n-1;i>=0;i--)
void init(){
    cin.tie(0);
    cin.sync_with_stdio(0);
}
int main (){
    long n;cin>>n;
    set<long>s;
    set <long>::reverse_iterator it;
    long arr[n];
    loopl(n){
        cin>>arr[i];
    }
    long max=n;
    loopl(n){
        s.insert(arr[i]);
        it=s.rbegin();
        if(*it==max){
            while(!s.empty()){
                cout<<*it<<" ";
                s.erase(s.find(*it));
                max--;
                if(s.rbegin()==s.rend()){break;}
                if(*it!=max){break;}
            }
        }          cout<<endl;
    }
}