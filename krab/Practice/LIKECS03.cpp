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
		ll a,b;
		cin>>a>>b;
		ll arr[a];
		loop(i,a){
			cin>>arr[i];
		}
		ll count=0;
		sort(arr,arr+a);
		for(ll i=0;i<b;i++){
			if(binary_search(arr,arr+a,pow(2,i))==true){
				count=count;
			}
			else count++;
		}
		cout<<count<<endl;
	}
}
 
