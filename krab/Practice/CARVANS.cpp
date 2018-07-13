#include<iostream>
#include<stdio.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		long long int n,count =0,s=2147483647;
		cin>>n;
		long long int  a[n];
		for(long long i=0;i<n;i++)
		{
			scanf("%lld",&a[i]);
			if(a[i]<=s)
			{
				count++;
				s=a[i];
			}
			
			
		
		}
		cout<<count<<endl;
	}
}
 
