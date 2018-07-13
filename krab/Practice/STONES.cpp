#include<iostream>
#include<string>
#include<cstdio>
#include<set>
#include<algorithm>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		string a,b;
		int p=0,count=0;
		cin>>b>>a;
		sort(a.begin(),a.end());
	    set<char> s;
	    for(int d=0;d<b.length();d++)
	    {
	    	s.insert(b[d]);
		}
		set <char> :: iterator it;
		for(it=s.begin();it!=s.end();it++ )
		{
		//cout<<*it<<endl;
		
		for(int i=0;i<a.length();i++)
		{
			if(*it==a[i])
			count++;	
	}}
		cout<<count<<endl;
	}
}
 
