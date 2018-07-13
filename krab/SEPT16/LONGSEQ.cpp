#include<iostream>
#include<algorithm>
#include<vector>
#include<string>
#include<cstdio>
using namespace std;
int main()
{
	int t; cin>>t;
	while (t--)
	{
		string v;    cin>>v;
		if(v.size()==1)
		cout<<"Yes"<<endl;
		else if(v.size()==2)
		{
			if(v[0]==v[1])
			cout<<"No"<<endl;
			else cout<<"Yes"<<endl;
		}
		else{
 
		sort(v.begin(),v.end());
		//cout<<v<<endl;
		if(v[0]==v[1]&&v[v.size()-1]!=v[v.size()-2]||v[0]!=v[1]&&v[v.size()-1]==v[v.size()-2])
		cout<<"Yes"<<endl;
		else cout<<"No"<<endl;		}
	}
}  
