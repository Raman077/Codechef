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
		int size;
		cin>>size;
		ll arr[size];
		for (int i=0;i<size;i++)
		{
			cin>>arr[i];
		}
		sort(arr,arr+size);
		ll sum= 0;
		for (int i=size-1;i>=0;i-=2)
		{
			sum=sum+arr[i];
		}
		cout<<sum<<endl;
		
	}
} 
