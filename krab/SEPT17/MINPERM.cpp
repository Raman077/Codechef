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
		if(n%2==0){
			for(ll i=1;i<=n;i++){
				if(i%2==1){
					cout<<i+1<<" ";
				}
				else cout<<i-1<<" ";
			}
			cout<<endl;
			continue;
		}
		ll arr[n];
		for(ll i=1;i<=n;i++ ){
			arr[i]=i;
		}
		ll ar[n];
		ll i;
		for(i=1;i<=n;i++){
			if(i<n-2){
				if(arr[i]%2==1){
					ar[i]=arr[i+1];
				}
					else ar[i]=arr[i-1];
				
			}
			else break;
		}
		ar[i]=arr[i+1];
		ar[i+1]=arr[i+2];
		ar[i+2]=arr[i];
		for(i=1;i<=n;i++)cout<<ar[i]<<" ";
		cout<<endl;
		
	}
}
 
