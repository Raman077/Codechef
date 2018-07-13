#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int size,m=0;
		cin>>size;
		int arr[size];
		for(int i=0;i<size;i++)
		{
			cin>>arr[i];
		}
		sort(arr,arr+size);
		int max =size-1;
		for(int i=size-2;i>=0;i--)
		{
			if(arr[i]!=arr[max])
			{
			
			m=arr[i];
			break;
		}
		}
		cout<<m<<endl;
	}
} 
