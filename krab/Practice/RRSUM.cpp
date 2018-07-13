#include<iostream>
#define ll unsigned long long int
using namespace std;
int main()
{
	ll n,m;
	
	cin>>n>>m;
	while(m--)
	{
		ll t;	cin>>t;
		if(t<=n)
		cout<<0<<endl;
		else if(t<=2*n)
		cout<<t-n-1<<endl;
		else 
		cout<<3*n-t+1<<endl;	
	}	
} 
