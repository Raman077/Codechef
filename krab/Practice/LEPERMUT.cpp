#include<iostream>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while (t--)
	{
		int n;
		cin >>n;
		int a[n];
		for(int i=0;i<n;i++)
		{
			cin>>a[i];
			
		}
		int count =0,gain=0;
		for(int x=0;x<n-1;x++)
		{
			if(a[x]>a[x+1])
			count++;
			for(int p=x+1;p<n;p++)
			{
				if(a[x]>a[p])
				gain++;
			}
		}
		if(count==gain)
		{
			cout<<"YES"<<endl;
		}
		else
		cout<<"NO"<<endl;
	}
}
 
