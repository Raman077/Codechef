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
int arr[1002];
int main()
{
	FI;
	int n,k;
	cin>>n>>k;
	ll c=0;
	cin.ignore();
	while(k--){
		string s;
		cin>>s;
		if(s=="CLICK"){
			int d;
			cin>>d;
		//	ll d=s[6]-'0';
			if(arr[d]==0){
				c++;
				arr[d]=1;
			}
			else{
				arr[d]=0;
				c--;
			}
			cout<<c<<endl;
		}
		else{
			memset(arr,0,sizeof arr);
			c=0;
			cout<<c<<endl;
		}
	}
	
}
 
