#include<bits/stdc++.h>
#define ll long long int
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		ll n,m, count=0;
		ll i=0;
		cin>>n>>m;
		vector<ll> v;
		for (ll p=m;p<n;p++)
		{
			v.push_back(p);
		//	cout<<v[i]<<" ";
			i++;
		}
		
		for (ll p=0;p<m;p++)
		{
		v.push_back(p);
	//	cout<<v[i]<<" ";
		i++;
		}
		ll p=0,x;
		
		while(v[p]!=-1)
		{
			//cout<<p<<" ";
			x=v[p];
				v[p]=-1;
			p=x;
		
			count++;
			if(count==n) break;
    	}
	if(count==n) cout<<"Yes"<<endl;
	else cout<<"No "<<count<<endl;
	}
} 
