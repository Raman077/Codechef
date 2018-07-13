#include<stdio.h>
#include<iostream>
#include<math.h>
 
 using namespace std;
 
int main()
{
	int T,count,i,p,s,d;
	cin>> T;
	for (count=1;count<=T;count++)
{
s=0;
	cin>>p;
		if(p<=2048){
for (i=11;i>=0;i--)
		{
			d=pow(2,i);
			if (p/d!=0)
			{
				p=p%d;
				s++;
			
			}}
		}	
		else if (p>2048)
		{
		
			if (p%2048!=0)
			{
				s=p/2048;
				p=p%2048;
			
				for (i=11;i>=0;i--)
		{
			d=pow(2,i);
			if (p/d!=0)
			{
				p=p%d;
				s++;
			
			}}
			
			}
			else 
			s= p/2048;
			
			}
			
				cout << s<< endl;
			}
			
		
		
	
	return 0;
	} 
