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
	int h,w;
    char c[10000][10000]={'-'};
    cin>>h>>w;
    rep(i,h)rep(j,w) cin>>c[i][j];
    int ans[10000]={0};
    rep(j,w){
        rep(i,h){
            if(c[i][j]=='#') ans[j]++;
        }
    }
    rep(i,w)cout<<ans[i]<<' ';

	return 0;
}