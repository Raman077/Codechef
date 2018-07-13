#include <iostream>
using namespace std;
 
int main() {
	int t;
	cin>>t;
	while(t--)
	{
		int count=0;
		int n;
		cin>>n;
		int arr[n];
		int sum=0;
		for (int i=0;i<n;i++)
		{
			cin>>arr[i];
			if(arr[i]==1) count++;
			if(arr[i]==1&&count!=i+1) sum=sum+100;
			else if(arr[i]==0) sum=sum+1100;
		}
		cout<<sum<<endl;
	}
} 
