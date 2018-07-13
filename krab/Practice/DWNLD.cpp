#include<iostream>
#include<cmath>
#include<cstring>
#include<set>
#include<vector>
#include<map>
#include<algorithm>
#include<iomanip>
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
#define go(n,arr,i) ll n; cin>>n; ll arr[n]; loop(i,n)cin>>arr[i];
#define forit(i, c) for(__typeof((c).begin()) i = (c).begin(); i != (c).end(); i++)
using namespace std;
 
int main()
{
	FI
	TC
	{
		ll n,k;
		cin>>n>>k;
		ll cost =0;
		vector<pair<ll,ll> >v;
		vector<ll>v1;
		ll xx=0,yy=0;
		loop(i,n){
			ll x;
			ll y;
			cin>>x>>y;
			xx+=x;
			v.pb(mp(xx,y));
			v1.pb(xx);
			cost+=x*y;
		}
		if(k==0){
			cout<<cost<<endl;
			continue;
		}
		v1.pb(k);
		sort(all(v1));
		ll co=0;
		ll b=upper_bound(all(v1),k)-v1.begin()-1;
		loop(i,b+1){
			if(i==b){
				if(i==0){
					co=k;
				}
				else
				co=k-v1[i-1];
				cost-=co*v[i].second;
				break;
			}
			if(i>0)
			cost-=(v[i].first-v[i-1].first)*v[i].second;
			else cost-=(v[i].first)*v[i].second;
		}
		cout<<cost<<endl;
	}
}
 
