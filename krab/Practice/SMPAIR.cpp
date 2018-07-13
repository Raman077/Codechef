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
		for (int a=0;a<size;a++)
		{
			cin>>arr[a];
		}
		sort(arr,arr+size);
		cout<<arr[0]+arr[1]<<endl;
	}
} 
