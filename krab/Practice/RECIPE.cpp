#include<iostream>
using namespace std;
int gcd(int a,int b)
{
	if(b!=0)
	return gcd(b,a%b);
	else return a;
}
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		int arr[n];
		cin>>arr[0];
		int b=arr[0];
		for(int a=1;a<n;a++)
		{
		cin>>arr[a];
		if(gcd(arr[a],b)!=b)
	    {
	    	b=gcd(arr[a],b);
		}
		}
	//	cout<<b<<endl;
		for (int i=0;i<n;i++)
		cout<<arr[i]/b<<" ";
		cout<<endl;
	
		
	}
} 
