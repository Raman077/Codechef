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
#define ll unsigned int
#define FI ios_base::sync_with_stdio(false);cin.tie(0);
#define iter(c) typeof(c.begin())
#define foreach(it, c) for(iter(c) it = c.begin(); it != c.end(); it++)
using namespace std;
int main()
{
	TC
	{
		ll x;
		cin>>x;
		ll arr[x];
		ll sum1=0;
		for(ll i=0;i<x;i++){
			cin>>arr[i];
			sum1+=arr[i];
		}
		ll sum2=arr[0];
		ll index=0;
		ll minsum=sum1+arr[0];
		for(ll i=1;i<x;i++){
			sum1-=arr[i-1];
			sum2+=arr[i];
			if(sum1+sum2<minsum){
				minsum=sum1+sum2;
				index=i;
			}			
		}
		cout<<index+1<<endl;
	}
} 
