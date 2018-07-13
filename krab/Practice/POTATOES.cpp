#include<iostream>
using namespace std;
int func(int x,int y)
{
	if(y==1) return 1 ;
	else if(x%y==0) return 0;
	else return func(x,y-1);
}
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int m,n;
		cin>>m>>n;
		for (int i=1;i<1001;i++)
		{
			int sum=m+n+i;
			int l=func(sum,sum/2);
			if(l==1)
			{
			//	cout<<func(sum);
				cout<<i<<endl;
				break;
				
			}
		}
	}
}
 
