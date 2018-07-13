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
map<int,int>m;
int main()
{
	TC
	{
		m.clear();
		string s;
		cin>>s;
		for(int i=0;i<s.length();i++){
			m[s[i]-'0']++;
		}
		//for(int i=0;i<=9;i++)cout<<m[i]<<" ";
	
	int x=0;	
	if(m[6]>0)
	{
		m[6]--;
		for(int i=5;i<=9;i++){
			if(m[i]>0){
				char c=6*10+i;
				cout<<c;
		}
		x++;
	}
	
m[6]++;
}
	if(m[7]>0){
		m[7]--;
		for(int i=0;i<=9;i++){
			if(m[i]>0){
				char c=7*10+i;
				cout<<c;
			}
			x++;
		}
		m[7]++;
	}
	
	if(m[8]>0){
		m[8]--;
		for(int i=0;i<=9;i++){
			//cout<<m[i]<<endl;
			if(m[i]>0){
				char c=8*10+i;
				cout<<c;
			}
			x++;
		}
		m[8]++;
	}
	if(m[9]>0&&m[0]>0){
		cout<<'Z';
	}
	cout<<endl;
}
}
 
