#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
	int t; cin>>t;
	while(t--)
	{
		int size;
		cin>>size;
		int arr[size];
		for (int i=0;i<size;i++)
		{
			cin>>arr[i];
		}
		sort(arr,arr+size);
		int p=0,sum=0;
		for (int i=size-1;i>0;i--)
		{
			p++;
			sum=sum+(arr[i]-arr[i-1])*p;
			
		}
		cout<<sum<<endl;
	}
} 
