#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	int T,N,count,s=0,i,p;
	cin >> T;
	for (count =1;count<=T;count++)
{
	s=0;
	cin >> N;
	i=1;
	while (N/pow(5,i)!=0)
	{
	p= N/pow(5,i);
	i++;
	s=p+s;
	}
	cout<<s<<endl;
	}
	
 
	
	
}
 
