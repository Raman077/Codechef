#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while (t--)
	{
		int n,x,sum=0;
		cin>>n>>x;
		int a[n];
		for(int i=0;i<n;i++)
		{
			cin>>a[i];
			sum=sum+a[i];
			
		}
		if(sum<x)
		cout<<-1<<endl;
		else
		{
			sort(a,a+n);
			if(sum%x>=a[0])
			{
				cout<<-1<<endl;
			}
			else
			cout<<sum/x<<endl;
		}
	}
}
 
