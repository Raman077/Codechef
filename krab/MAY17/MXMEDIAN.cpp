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
		int p = 2*size;
		int arr[p];
		for(int i = 0;i<p;i++)
		{
			cin>>arr[i];
		}
		sort(arr,arr+p);
		int a[size], j=0;
		for(int i = 1,j=p-2;i<j;i+=2,j-=2)
		{
			int temp;
			temp = arr[i];
			arr[i] = arr[j];
			arr[j] = temp;
		}
	//	for(int i =0;i<p;i+=2)
	//	cout<<arr[i]<<" ";
		for(int i =0;i<p;i+=2)
		{
			a[j]=max(arr[i],arr[i+1]);
			j++;
		}
		sort(a,a+size);
		cout<<a[size/2]<<endl;
		for(int i=0;i<p;i++) cout<<arr[i]<<" ";
		cout<<endl;
	}
} 
