#include<iostream>
#include<algorithm>
#define ll unsigned long long int
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n;cin>>n;
		ll m,arr[n];
		int flag=1,count=0;
		cin>>m;
		for (int i=0;i<n;i++)
		{
			cin>>arr[i];
		}
		ll sum =0;
		sort(arr,arr+n);	
		for (int i=n-1;i>=0;i--)
		{
			sum=sum+arr[i];
			count++;
			if(sum>=m){
			flag=0;
			break;
		}
		}
		if(flag==0)
		cout<<count<<endl;
		else cout<<-1<<endl;
	}
} 
