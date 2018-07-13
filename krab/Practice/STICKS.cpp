#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n,p1,p2,count=0,i;
		cin>>n;
		int A[n];
		for (int i=0;i<n;i++)
		{
			cin>>A[i];
		}
		sort(A,A+n);
		for ( i=n-1;i>0;i--)
		{
			
			if(A[i]==A[i-1])
			{
			count++;
			p1=A[i];
		//	cout<<A[i]<<A[i-1]<<' ';
			break;
			}
		}
		//cout<<i<<' ';
		for( i=i-2;i>0;i--)
		{
			if(A[i]==A[i-1])
			{
			count++;
		    p2=A[i];
		    //cout<<A[i];
			break;
			}
		}
		//cout<<count<<' ';
		if(count==2)
		cout<<p1*p2<<endl;
		else cout<<"-1"<<endl;
	}
} 
