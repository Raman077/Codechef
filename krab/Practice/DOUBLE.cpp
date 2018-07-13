#include<iostream>
#define ll long long int
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		ll p;
		cin>>p;
		if(p%2==0) cout<<p<<endl;
		else cout<<p-1<<endl;
	}
} 
