#include<iostream>
#include<algorithm>
#define ll long long int
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
	ll n;
		cin>>n;
		ll arr[n];
		int flag=0;
		for (ll i=0;i<n;i++)
		{
			cin>>arr[i];
		}
		sort(arr,arr+n);
		for (ll a=1;a<n;a++)
		{
			if(abs(arr[a]-arr[a-1])>1)
			{
				flag=1;
				break;
			}
		}
		if(flag==0)
		cout<<"YES"<<endl;
		else cout<<"NO"<<endl;
	}
} 
