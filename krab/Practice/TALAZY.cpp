#include<iostream>
using namespace std;
int main()
{
	int t; cin>>t;
	while(t--)
	{
	long long unsigned N,M,B;
		long long unsigned time=0;
		cin>>N>>B>>M;
		while(N!=1)
		{
			time=time+B+M*((N+1)/2);
			N=N-(N+1)/2;
		//	cout<<N<<' ';
			M=M*2;
			//cout<<time<<endl;
		}
		time=time+M;
		cout<<time<<endl;
	}
}
 
