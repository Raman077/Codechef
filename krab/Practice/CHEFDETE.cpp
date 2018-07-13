#include<iostream>
#include<vector>
#include<set>
#include<algorithm>
using namespace std;
 
int main()
{
	int t;
	cin>>t;
    set <int> v;
    set <int>::iterator it;
    for (int i=1;i<=t;i++)
    {
    	v.insert(i);
	}
	for (int p=1;p<=t;p++)
	{
		int x;
		cin>>x;
		v.erase(x);
	}
	for (it=v.begin();it!=v.end();it++)
	{
		cout<<*it<<' ';
	}
} 
