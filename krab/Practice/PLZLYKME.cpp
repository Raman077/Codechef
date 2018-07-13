#include<iostream>
#define ll long long int
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		ll l,d,s,c;
		cin>>l>>d>>s>>c;
		for (ll i=1;i<d;i++)
		{
			s=s+c*s;
			if(s>=l)
			{
				break;
			}
		}
		if(s>=l) cout<<"ALIVE AND KICKING"<<endl;
		else cout<<"DEAD AND ROTTING"<<endl;		
	}
} 
