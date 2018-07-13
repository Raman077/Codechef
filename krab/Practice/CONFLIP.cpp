#include<iostream>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int g;
		cin>>g;
		while(g--)
		{
			int a,k;
			long long n;
			cin>>a>>n>>k;
			if(a==k)
			{
				cout<<n/2<<endl;
			}
			else
			cout<<n-n/2<<endl;
			
			
		}
	}
}
 
