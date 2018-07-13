#include<iostream>
#include<cmath>
#include<cstdio>
#include<cstdlib>
using namespace std;
int main()
{
	int a,n,T;
	cin>>T;
	while(T--)
	{
		cin>>a>>n;
		cout<<sqrt(abs(pow(n,2)-pow(a,2)))<<' '<<sqrt(pow(n,2)+pow(a,2))
		<<endl;
	}
} 
