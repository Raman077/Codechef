#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
	int n;
	cin>>n;
	while(n!=0)
	{
		int count=0,arr[n],p=n-1;
		for(int i=0;i<n;i++)
			cin>>arr[i];
		
		sort(arr,arr+n);
		for (int i=n-1;i>1;i--)
		{
			int p=0,q=i-1;
			while(p<q)
			{
				if(arr[p]+arr[q]<arr[i])
				{
					count+=(q-p);
					p++;
				}
				else 
				{
					q--;
				}
			}
				
		}
		cout<<count<<endl;
		cin>>n;
	}
} 
