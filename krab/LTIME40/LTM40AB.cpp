#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int a,b,c,d;
		cin>>a>>b>>c>>d;
		int sum=0;
		for (int i=a;i<=b;i++)
		{
		  for(int x=d;x>=c;x--)
		  {
		  	if(i<x)
		  	{
		  		sum++;
			  }
			  else break;
		  }
		}
		cout<<sum<<endl;
	}
} 
