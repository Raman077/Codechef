#include<iostream>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n,m,c;
		cin>>n>>m>>c;
		int count=0;
		    for(int i=1;i<=n;i++)
			{
				for(int p=1;p<=m;p++)
			     {
			     	if(i*p==c)
			     	count++;
			     	else if(i*p>c)break;
			     }
				}	
            cout<<count<<endl;
		   
	}
}  
