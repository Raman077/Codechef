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
		int n;
		cin>>n;
		ll sum;
		cin>>sum;
		int arr[n];
		int s=0;
		for(int i=0;i<n;i++)
		{
			cin>>arr[i];
			s+=arr[i];
		}
		if(s<sum)
		{
			cout<<-1<<endl;
		}
		else
		{
		sort(arr,arr+n);
		ll res;
		ll prev=0;
		int flag=0;
		for(int i=0;i<n;i++)
		{
			res=(n-i)*arr[i]+prev;
			//cout<<res<<endl;
			if(res==sum)
			{
				cout<<arr[i]<<endl;
				flag=1;
				break;
			}
			prev+=arr[i];
		}
		if(flag==0)cout<<-1<<endl;
		}
		
	}
} 
