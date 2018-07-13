#include<iostream>
#include<cstdio>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while (t--)
	{
		int n,ref,laddu=0;
		string c,input;
		cin>>n;
		cin>>c;
		
		//cout<<ref<<' ';
		while(n--)
		{
			cin>>input;
			if(input=="TOP_CONTRIBUTOR")
			{
			laddu+=300;	
			}
			else if(input=="CONTEST_HOSTED")
			{
				laddu+=50;
			}
			else if(input=="CONTEST_WON")
			{
				int p;
				cin>>p;
				if(p>20)
				{
					laddu+=300;
				}
				else
				laddu=laddu +300+ 20-p;
			}
			else if(input=="BUG_FOUND")
			{
				int p;
				cin>>p;
				laddu+=p;
			}
		}
		//cout<<laddu<<' ';
        if(c=="INDIAN")
 
		cout<<laddu/200<<endl;
        else cout<<laddu/400<<endl;
	}
} 
