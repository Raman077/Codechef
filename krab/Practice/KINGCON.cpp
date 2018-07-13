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
#define MX 100000
#define pi pair<int, int>
#define TC int T;cin>>T;while(T--)
#define loop(i,a) for(int i=0;i<a;i++)
#define pb(a) push_back(a)
#define all(a) (a).begin(), (a).end()
#define mp(x, y) make_pair((x), (y))
#define ll long long int
#define endl '\n'
#define iter(c) typeof(c.begin())
#define foreach(it, c) for(iter(c) it = c.begin(); it != c.end(); it++)
using namespace std;
#define MAXX 100007
int parent[MAXX];
int child[MAXX];
int low[MAXX];
int tym[MAXX];
bool seen[MAXX];
bool is_cut[MAXX];
set<int>s;
vector<vector<int> >adj(MAXX);
void init(){
	for(int i=0;i<MAXX;i++){
		parent[i]=0;
		child[i]=0;
		low[i]=0;
		tym[i]=0;
		seen[i]=false;
		is_cut[i]=false;
		s.clear();		
	}
}
void dfs(int s)
{
  static int ci=0;
 
  seen[s]=true; 
 
  low[s]=tym[s]=ci++;
 
  for(int i=0;i<adj[s].size();i++)
  {
     int curr = adj[s][i];
 
     if(curr==parent[s])
      continue;        
  
    if(!seen[curr])
    {
 
      child[s]++; 
      parent[curr]=s; 
      dfs(curr);
      low[s] = min(low[s] , low[curr]); 
      if(low[curr] >= tym[s])
        is_cut[s]=true;
 
    }
    else
    {
      low[s]= min(low[s],tym[curr]);
    }
 
 
  }
 
}
 
int main()
{    
      TC{
      	for(int i=0;i<MAXX;i++)adj[i].clear();
      	init();
      int n,m,k;
      cin>>n>>m>>k; 
 
      for(int i=0;i<m;i++)
      {
          int a,b;
          cin>>a>>b;
          adj[a].push_back(b);
          adj[b].push_back(a);
      }
       
      parent[1]=-1;
      dfs(1);
      is_cut[1]= child[1]>1 ? true : false; 
 
 	  ll c=0;
      for(int i=0;i<n;i++)
      {
        if(is_cut[i])
          c++;
      }
 
 	  cout<<c*k<<endl;
}
    return 0;
} 
