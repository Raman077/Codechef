#include<iostream>
#include<set>
#include<cstdio>
#include<algorithm>
using namespace std;
int main()
{
	string s;
	cin>>s;
	int t ;
	cin>>t;
	sort(s.begin(),s.end());
 
	while (t--)
	{
		int count =0;
		string p;
		cin>>p;
		set <char> sap;
		set <char> :: iterator it;
		for (int a=0;a<p.size();a++)
		{
			sap.insert(p[a]);
		}
		string p2;
		int i=0;
	for (it=sap.begin();it!=sap.end();it++)
	{
		//cout<<*it;
		p2[i]=*it;
		if(p2[i]==s[i])
		count++;
		i++;
	}
	//cout<<p2[0]<<p2[1];
	//	cout<<s<<endl;
	if(count==i)
	cout<<"Yes"<<endl;
	else cout<<"No"<<endl;
	}
 
} 
