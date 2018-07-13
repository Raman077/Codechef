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
int main()
{
	int n;
	cin>>n;
	while(n--){
		ll result =1;
		ll a,b;
		cin>>a>>b;
		if(a==b){
			cout<<1<<endl;
			continue;
		}
		else{
			ll x=a-1;
			ll y=b-1;
			if(x/2<y){
				y=x-y;
			}
			
			for(ll i=0;i<y;i++){
				result=result*(x-i);
				result=result/(i+1);
			}
		}
		cout<<result<<endl;
	}
}
 
