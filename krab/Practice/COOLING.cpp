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
		int n; cin>>n;
		int arr[n],a[n];
		loop(i,n)cin>>arr[i];
		loop(i,n)cin>>a[i];
		sort(arr,arr+n);
		sort(a,a+n);
		ll x=0,y=0;
		ll count=0;
		loop(i,n){
			if(a[i]>=arr[x]){
				count++;
				x++;
			}
		}
		cout<<count<<endl;
	}
}
 
