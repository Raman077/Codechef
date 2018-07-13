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
	TC
	{
		ll n;
		cin>>n;
		ll arr[n],a[n];
		ll mp=0,mp1=0;
		for(ll i=0;i<n;i++){
			cin>>arr[i];
		}
		for(ll i=0;i<n;i++){
			cin>>a[i];
		}
		sort(arr,arr+n);
		sort(a,a+n);
		ll x=0,y=0;
		for(ll i=n-1;i>=0;i--){
			if(arr[i]==arr[n-1])x++;
			if(a[i]==a[n-1])y++;
		}		
		cout<<x*y<<endl;
	}
}
 
