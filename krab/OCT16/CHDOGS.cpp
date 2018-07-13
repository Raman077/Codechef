#include<iostream>
#include<cmath>
#include<cstdlib>
#include<iomanip>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		double s,v;
		cin>>s>>v;
		double sol;
		
		sol=(2*s)/(3*v);
		if(sol>0.0000001)
		cout<<setprecision(7)<<fixed<<sol<<endl;
		else {cout.precision(7);
                cout<<fixed<<0.0000001<<endl;}
		
	}
}  
