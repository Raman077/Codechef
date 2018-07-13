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
map<char,ll>m,mp;
int main()
{
	TC
	{
		string s;
		cin>>s;
		ll flag=0;
		for(ll i=0;i<s.size();i++){
			m[s[i]]=i;
		}
		for(ll i=0;i<s.size();i++){
			mp[s[i]]=i;
			if(mp[s[i]]!=m[s[i]]){
				flag=1;
				break;
			}
	}
	if(flag==1)cout<<"yes"<<endl;
	else cout<<"no"<<endl;
	m.clear();
	}
}
 
