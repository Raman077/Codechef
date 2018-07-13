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
		long long int  sum1=0,sum2= 0;
		int a[size],b[size];
		for (int i=0;i<size;i++)
		{
			cin>>a[i];
			if(i%2==0)sum1=sum1+a[i];
			else sum2+=a[i];
		}
			for (int i=0;i<size;i++)
		{
			cin>>b[i];
			if(i%2==1)sum1=sum1+b[i];
			else sum2+=b[i];
		}
		cout<<min(sum1,sum2)<<endl;
	}
} 
