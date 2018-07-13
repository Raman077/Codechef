#include<bits/stdc++.h>
using namespace std;
int main()
{
	int q;
	cin>>q;
	while(q--)
	{
	int t;
	cin>>t;
	vector<string> p,q;
	while(t--)
	{
		
		string s;
		cin>>s;
		p.push_back(s);
		string s1; 
		getline(cin,s1);
		q.push_back(s1);		
	}
	cout<<"Begin"<<q[q.size()-1]<<endl;
	for(int i=p.size()-1;i>=1;i--)
	{
		if(p[i]=="Left") cout<<"Right"<<q[i-1]<<endl;
		else cout<<"Left"<<q[i-1]<<endl;
	}
	cout<<endl;
}
} 
