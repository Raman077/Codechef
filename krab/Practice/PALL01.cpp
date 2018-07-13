#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		string s,p;
		cin>>s;
		p=s;
		reverse(s.begin(),s.end());
		//cout<<s<<endl;
		if(s==p)cout<<"wins"<<endl;
		else cout<<"losses"<<endl;
		
	}
}
 
