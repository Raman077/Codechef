#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
	int t ;
	cin>>t;
	while(t--)
	{
	int n,m;
	cin>>n>>m;
	int x = 1000000000;
	int y=0;
	for(int i=0;i<m;i++)
	{
		int p;
		cin>>p;
		x=min(x,p);
		y=max(y,p);
	}
	
	for(int i=0;i<n;i++) cout<<max(y-i,i-x)<<" ";
	cout<<endl;
	}
	
} 
