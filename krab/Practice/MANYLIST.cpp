#include<iostream>
#include<cmath>
#include<cstring>
#include<set>
#include<vector>
#include<map>
#include<algorithm>
#include<utility>
#define MX 100000
#define pb push_back
#define mp make_pair
#define fs first
#define sec second
#define TC int T;cin>>T;while(T--)
#define ll long long int ;
using namespace std;
 
vector <int> v(1000,0);
 
struct node 
{
	vector <int> p = v;
	int	size = 0;
};
 
struct node a[100000];
int main()
{
	int n,o,i,x,y,z,m;
	cin>>n>>o;
	while(o--)
	{
		cin>>i;
	if(i)
	{
		cin>>z;
		cout<<a[z].size<<endl;
	}
	else 
	{
		cin>>x>>y>>m;
		for(int j=x;j<=y;j++)
		{
			if(a[j].p[m]==0)
			{
				a[j].p[m]=1;
				a[j].size++;	
			}
		}
	}
	}
	
} 
