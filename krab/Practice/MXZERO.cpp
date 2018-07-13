#include<iostream>
using namespace std;
int main()
{
	int t;
	cin >>t;
	while(t--)
	{
		int count=0,count1=0;
		int p; cin>>p;
		while(p--)
		{
			int x;
			cin>>x;
			if(x==1)
			{
				count ++;
			}
			else
			count1++;
		}
		if(count%2==0)cout<<count1<<endl;
		else cout<<count<<endl;
	}
} 
