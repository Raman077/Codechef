#include<iostream>
#include<cstdio>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		string s;
		cin>>s;
		if(s.length()==1)cout<<"Chef"<<endl;
	else if(s.length()%2==1&&s[s.length()/2]=='W')cout<<"Chef"<<endl;
	else cout<<"Aleksa"<<endl;
	}
} 
