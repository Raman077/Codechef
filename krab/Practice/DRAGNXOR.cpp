#include<iostream>
#include<vector>
#include<cmath>
using namespace std;
int countone(int x)
{
	int counts=0;
	while(x)
	{
		x=x&(x-1);
		counts++;
	}
	return counts;
}
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
	int p,m,n,l=0;
	cin>>p>>m>>n;
	int count=countone(m),count1=countone(n);
	int c=count+count1;
//	cout<<c;
	if(c<=p)
	{
		for (int i=p-1;i>=p-c;i--)
		l=l+pow(2,i);
		cout<<l<<endl;
	}
	else 
	{
		int x=2*p-c;
	//	cout<<x<<endl;
		l=0;
		for(int i=p-1;i>=p-x;i--)
		
		l=l+pow(2,i);	cout<<l<<endl;
 
	}
}
}
 
