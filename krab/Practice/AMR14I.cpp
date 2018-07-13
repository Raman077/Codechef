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
		ll n,m,c,d,e;
		cin>>n>>m>>c>>d>>e;
		ll arr[2*c],ar[2*c];
		arr[0]=1;ar[0]=1;
		ll res=0;
		ll co=1;
		loop(i,2*c+1){
			if(i==0){
				continue;
			}
			if(i%2==1){
				arr[co]=d+arr[co-1];
				if(arr[co]>n){
					arr[co]=m+(arr[co]-m)%(n-m+1);
				}
			}
			else{
				ar[co]=e+ar[co-1];
				if(ar[co]>n){
					ar[co]=m+(ar[co]-m)%(n-m+1);
				}
				if(ar[co]==arr[co])res++;
				co++;
			}
			
		}
		cout<<res<<endl;
		
	}
}
 
