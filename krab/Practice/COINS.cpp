#include<iostream>
#include<cmath>
#include<cstring>
#include<set>
#include<vector>
#include<map>
#include<algorithm>
#include<queue>
#include<sstream>
#include<climits>
#include<utility>
#define MX 100007
#define pi pair<int, int>
#define TC int T;cin>>T;while(T--)
#define loop(i,a) for(int i=0;i<a;i++)
#define pb(a) push_back(a)
#define all(a) (a).begin(), (a).end()
#define mp(x, y) make_pair((x), (y))
#define ll long long int
#define FI ios_base::sync_with_stdio(false);cin.tie(0);
#define iter(c) typeof(c.begin())
#define foreach(it, c) for(iter(c) it = c.begin(); it != c.end(); it++)
using namespace std;
ll dp[1000001];
ll coins(ll x){
	if(x<=1000000)return dp[x];
	else return (coins(x/2)+coins(x/3)+coins(x/4));
}
int main()
{
	
	for(ll i=1;i<=1000000;i++){
		dp[i]=max(i,dp[i/2]+dp[i/3]+dp[i/4]);
	}
	ll n;
	while (scanf("%lld",&n)!=EOF) printf("%lld\n",coins(n));
}
 
