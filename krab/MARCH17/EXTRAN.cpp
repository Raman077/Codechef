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
		int n,flag=0;
		cin>>n;
		ll arr[n];
		for (int i=0;i<n;i++)
			cin>>arr[i];
		sort(arr,arr+n);
		int j;
		for (int i=0;i<n-2;i++)
		{
			if(arr[i+1]-arr[i]!=1) 
			{
			j=i;
			flag=1;
			cout<<arr[j]<<endl;
			break;
		}
		}
		if (flag==0)
		cout<<arr[n-1]<<endl;
	}
} 
