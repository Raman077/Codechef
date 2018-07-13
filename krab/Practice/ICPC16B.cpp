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
		int n;
		cin>>n;
		ll arr[n];
		map<ll,int>isT;
		int flag1=0;int flag0=0,fl=0;int sad=0;
		for(int i=0;i<n;i++)
		{
			cin>>arr[i];
			if(arr[i]==1)flag1++;
			else if(arr[i]==0)flag0++;
			else if(arr[i]==-1)
			{
				fl++;
			}
			else 
			{
				sad++;
			}
		}
		if(sad>=2)cout<<"no"<<endl;
		else if(fl>0)
		{
			if(fl==1)
			{
				if(sad>=1)
				{
					cout<<"no"<<endl;
				}
				else cout<<"yes"<<endl;
			}
			else
			{
				if(sad>=1)
				{
					cout<<"no"<<endl;
				}
				else if(flag1==0)cout<<"no"<<endl;
				else cout<<"yes"<<endl;
			}
		}
		else cout<<"yes"<<endl;
		
		
	}
		
		
	}
 
