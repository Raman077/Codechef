#include<iostream>
#include<set>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int p;
		cin >>p;
		set <int> s;
		for (int i=1;i<=p;i++)
		{
			int x;cin>>x;
			s.insert(x);
		}
		cout<<s.size()<<endl;
	}
} 
