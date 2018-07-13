#include<iostream>
#include<cmath>
#include<cstring>
#include<set>
#include<vector>
#include<map>
#include<algorithm>
#include<sstream>
#include<climits>
#include<utility>
#define MX 100000
#define fs first
#define sec second
#define vi vector<int>
#define pi pair<int, int>
#define TC int T;cin>>T;while(T--)
#define loop(i,a,c) for(int i=0;i<a;i++)
#define loop1(i,a,c) for(int i=1;i<=a;i++)
#define pb(a) push_back(a)
#define all(a) (a).begin(), (a).end()
#define mp(x, y) make_pair((x), (y))
#define ll long long int
#define iter(c) typeof(c.begin())
#define foreach(it, c) for(iter(c) it = c.begin(); it != c.end(); it++)
using namespace std;
map<string,int>m;
int main()
{
	int t;
	cin>>t;
	while(t--){
		int x=4,y=4;
		while(x--)
		{
			string s;
			cin>>s;
			m[s]++;
		}
		int count=0;
		while(y--)
		{
			string s;
			cin>>s;
			m[s]++;
			if(m[s]==2)count++;
		}
		m.clear();
		if(count>=2)cout<<"similar"<<endl;
		else cout<<"dissimilar"<<endl;
	}
} 
