#include<iostream>
#include<vector>
#include<string>
#include<algorithm>
#include<stack>
#include<queue>
#include<map>
#include<functional>
#include<math.h>
using namespace std;
#define rep(i,n) for(ll i=0;i<(n);i++)
#define REP(i,l,n) for(ll i=(l);i<(n);i++)
#define per(i,n) for(ll i=(n);i>0;i--)
#define pf(n) printf("%d\n",n)
#define pff(a,b) printf("%d  %d\n",a,b);
typedef long long ll;
typedef pair<ll, ll> p;
const int INF = 1001001001;
const double PI = acos(-1);
const ll mod = 1000000007;

int f(int a){
    if(a==0){return 1;}
    return a*f(a-1);
}

int main() {
	int n;
    cin>>n;

    string ans="";
    if(n<16){
        ans+="0";
        if(n>9){
            ans+='A'+n-10;
        }
        else{
            ans+=to_string(n);
        }
    }
    else{
        if(n/16>9){
            ans+='A'+n/16-10;
        }
        else{
            ans+=to_string(n/16);
        }
        n%=16;
        if(n>9){
            ans+='A'+n-10;
        }
        else{
            ans+=to_string(n);
        }
    }
    cout<<ans<<endl;
    
	return 0;
}