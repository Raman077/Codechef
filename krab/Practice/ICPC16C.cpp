#include<iostream>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int sum=0;
		int d;
		cin>>d;
		if(d<9)
		{
			cout<<d+1<<endl;
		}
		else
		{
			d=d%9+1;
			cout<<d<<endl;
			
		}
	}
} 
