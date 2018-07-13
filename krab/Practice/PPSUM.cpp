#include<iostream>
using namespace std;
int sum(int x)
{
	int s=(x*(x+1))/2;
	return s;
}
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int d,n,s;
		cin>>d>>n;
		s=n;
		for (int i=0;i<d;i++)
		{
		
			s=sum(s);
		}
		cout<<s<<endl;
	}
} 
