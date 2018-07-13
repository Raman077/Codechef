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
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		
		int a,b,c,d;
		int x=0;
		int fl=0;
		cin>>a>>b>>c>>d;
		if(a*c>b||a*d<b)
		{
			cout<<-1<<endl;
		}
		
		else
		{
			for(int i=0;i<a;i++)
			{
				int flag=0;
				for(int j=0;j<a;j++)
				{
					cout<<j+1<<" "<<(j+i)%a+1<<endl;
					x++;
					if(x==b)
					{
						flag=1;break;
					}
				}
				if(flag==1)break;				
			}
		}
	}
} 
