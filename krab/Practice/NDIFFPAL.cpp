#include<iostream>
using namespace std;
int main()
{
	int d,N;
	int T;
	cin>>T;
	while(T--)
	{
 
	cin>>N;
	char z[3]={98,99,100};
	int m=0;
	int j=1,i;
	if(N==2)
	cout<<"ab"<<endl;
	else
	{
 
	for( i=1;i<=N;i=i+j)
	{
		j++;
		if(N/i>=0)
		cout<<"a";
 
		d=N%i;}
 
		if(d>0)
		{
 
		for(int p=1;p<=d;p++)
		{
 
		cout<<z[m];
 
		if(m<=1)
		m++;
		else
		m=0;
	}
	}
 
}
cout<<endl;	
}}  
