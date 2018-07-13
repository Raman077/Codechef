#include<iostream>
#include<set>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int size;
		cin>>size;
		set<int> s;
		for (int i=0;i<size;i++)
		{
			int p;
			cin>>p;
			s.insert(p);
		}
		cout<<s.size()<<endl;
	}
}
 
