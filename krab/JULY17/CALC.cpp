#include<iostream>
#include<cmath>
#include<cstring>
#include<set>
#include<vector>
#include<map>
#include<algorithm>
#include<sstream>
#include<climits>
#include<utility>
#define MX 100000
#define fs first
#define sec second
#define vi vector<int>
#define pi pair<int, int>
#define TC int T;cin>>T;while(T--)
#define loop(i,a,c) for(int i=0;i<a;i++)
#define loop1(i,a,c) for(int i=1;i<=a;i++)
#define pb(a) push_back(a)
#define all(a) (a).begin(), (a).end()
#define mp(x, y) make_pair((x), (y))
#define ll long long int
#define iter(c) typeof(c.begin())
#define foreach(it, c) for(iter(c) it = c.begin(); it != c.end(); it++)
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--){
	ll n,b;
	cin>>n>>b;
	 ll m=0,mi;
	
	
	
	ll x=n/2;
	ll v=0;
	ll y=x/b;
	ll y1=y+1;
	ll p1=y-1;
	for(ll xx=p1;xx<=y1;xx++)
	{
		ll i=n-xx*b;
		mi=(i*((n-i)/b));
		if(mi>v)x=i;
		v=max(mi,v);
		
	}
	cout<<v<<endl;
		
		
	
	
	
	}
}  
