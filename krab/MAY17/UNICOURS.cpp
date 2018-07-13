#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int size;
		cin>>size;
		int arr[size];
		int count=0;
		for(int i=0;i<size;i++)
		{
			cin>>arr[i];
		}
		sort(arr,arr+size);
		int max = arr[size-1];
		cout<<size-max<<endl;
		
		
	}
} 
