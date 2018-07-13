#include<iostream>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n,m,k;
		cin>>n>>m>>k;
		if(n-m>0)
		{
			if(m+k<=n)cout<<n-m-k<<endl;
			else cout<<0<<endl;
		}
		else if(m-n>0)
		{
			if(n+k<=m)cout<<m-n-k<<endl;
			else cout<<0<<endl;
		}
		else cout<<0<<endl;
	}
} 
