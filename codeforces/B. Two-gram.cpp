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
    int n;cin>>n;
    string s;cin>>s;
    map<string,int>m;
    vector<string>v;
    loop(s.length()-1){
        string str="";
        str+=s[i];str+=s[i+1];
        v.push_back(str);
        m[str]++;
    }
    int max=-1;string var="";
    loop(v.size()){
        string str=v[i];
        if(m[str]>max){max=m[str];var=str;}
    }    cout<<var;
}