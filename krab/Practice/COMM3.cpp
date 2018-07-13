#include<iostream>
#include<cmath>
#include<algorithm>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		int arr[3][2],d1,d2,d3;
		for(int i=0;i<3;i++)
		{
			for(int j=0;j<2;j++)
			cin>>arr[i][j];
		}
		int count=0;
		d1=pow((arr[0][0]-arr[1][0]),2)+pow((arr[0][1]-arr[1][1]),2);
		if(d1<=n*n) count++;
		d2=pow((arr[1][0]-arr[2][0]),2)+pow((arr[1][1]-arr[2][1]),2);
		if(d2<=n*n) count++;
		d3=pow((arr[0][0]-arr[2][0]),2)+pow((arr[0][1]-arr[2][1]),2);
		if(d3<=n*n) count++;
		if(count>1) cout<<"yes"<<endl;
		else cout<<"no"<<endl;
		
	}
} 
