#include<iostream>
using namespace std;
int main()
{
	long long int t;
	cin>>t;
	while(t--)
	{
		long long int n; cin>>n;
		cout<<n+(n*(n+1))/2<<endl;
	}
} 
