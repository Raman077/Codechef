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
#include<queue>
#define fs first
#define sec second
#define vi vector<int>
#define tc(t) int t; scanf("%d",&t); while(t--)
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
 
#define MAX 100009
vector<int>v[MAX];
map<int,int>m;
int main()
{
	tc(t)
	{
		int n,d;
		scanf("%d %d",&n,&d);
		{
			ll sum=0;
			
			vector<pair<int ,pair<int,int> > >p;
			pair<int,int>p2;
			while(n--)
			{
				int a,b,c;
				
				scanf("%d %d %d",&a,&b,&c);
				sum=sum+b*c;
				p2=mp(a,b);
				
				p.push_back(mp(c,p2));
				for(int i=a-1;i<d;i++)
				{
					v[i].push_back(c);
				}
			}
			
			ll minus=0;
			for(int i=0;i<d;i++)
			{
				v[i].push_back(0);
				make_heap(v[i].begin(),v[i].end());
			}
			
			sort(p.rbegin(),p.rend());
			
			for(int i=0;i<p.size();i++)
				{
					int count=0;
					for(int j=p[i].sec.fs-1;j<d;j++)
					{
				
						if(p[i].fs==v[j].front())
						{
						//	cout<<count<<" "<<p[i].sec.sec<<endl;
							if(count>=p[i].sec.sec)
							{
								pop_heap (v[j].begin(),v[j].end()); v[j].pop_back();
							}
							else
							{
								count++;
								minus++;
								sum-=v[j].front();
								v[j].push_back(INT_MAX);
								push_heap(v[j].begin(),v[j].end());
								if(minus==d)break;
							}
						}
					}
					if(minus==d)break;
				}
				cout<<sum<<endl;
				
	}
	for(int i=0;i<MAX;i++)v[i].clear();
	}
}
  
