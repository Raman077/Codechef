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
		map<char,int>m,mi;
		ll arr[26];
		loop(i,26){
			cin>>arr[i];
			m['a'+i]+=arr[i];
		}
		string s;
		cin>>s;
		loop(i,s.length()){
			mi[s[i]]++;
		}
		ll co=0;
		char c='a';
		for(int i=0;i<26;i++){
			if(mi[c+i]==0){
				co+=m[c+i];
			}
		}
		cout<<co<<endl;
	}
}
 
