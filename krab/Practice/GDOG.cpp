#include<iostream>
#include<cstdio>
#include<algorithm>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n,k;
		cin>>n>>k;int m=0;
		for (int i=1;i<=k;i++)
		{
			m=max(m,n%i);
		}
		cout<<m<<endl;
	}
} 
