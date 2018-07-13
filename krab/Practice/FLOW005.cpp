#include<iostream>
using namespace std;
int main()
{
	int t; cin>>t;
	while(t--)
	{
		int s;cin>>s;
		int count=0;
		int num=100;
		while(s!=0)
		{
			count=count+s/num;
			s=s%num;
			if(num==50)num=10;
			else 
			num/=2;
		}
	cout<<count<<endl
	;
	    
	}
} 
