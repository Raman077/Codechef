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
#define MX 100000
#define pi pair<int, int>
#define TC int T;cin>>T;while(T--)
#define loop(i,a) for(int i=0;i<a;i++)
#define pb(a) push_back(a)
#define all(a) (a).begin(), (a).end()
#define mp(x, y) make_pair((x), (y))
#define ll long long int
#define iter(c) typeof(c.begin())
#define foreach(it, c) for(iter(c) it = c.begin(); it != c.end(); it++)
using namespace std;
vector<int>v[1002];
vector<pi>rim;
int main()
{
	TC
	{
		rim.clear();
		for(int i=0;i<1001;i++)v[i].clear();
		ll a,b;
		cin>>a>>b;
		while(b--){
			int c,d;
			cin>>c>>d;
			v[c].pb(d);
			v[d].pb(c);
		}
		ll count=0;
		while(1){
			count++;
			int flag=0;
		for(int i=1;i<=a;i++){
			if(v[i].size()==1){
				flag=1;
				ll x=v[i][0];
				rim.pb(mp(i,x));
				v[i].erase(v[i].begin());
			}
		}
		if(flag==0){
			break;
		}
		for(int i=0;i<rim.size();i++){
			ll x=rim[i].second;
			ll y=rim[i].first;
			for(int ii=0;ii<v[x].size();ii++){
				if(v[x][ii]==y)
				v[x].erase(remove(v[x].begin(), v[x].end(), y), v[x].end());
			}
			
		}
			
	}
	cout<<count-1<<endl;
	}
}
 
