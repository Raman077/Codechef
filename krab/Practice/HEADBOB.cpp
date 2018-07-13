#include<iostream>
#include<set>
#include<cstring>
#include<algorithm>
using namespace std;
int main()
{
	int t;
	cin>>t; 
	while(t--)
	{
		int size;cin>>size;
		string s;
		cin>>s;
		sort(s.begin(),s.end());
		if(s[0]=='I') cout<<"INDIAN"<<endl;
		else if(s[0]=='N'&&s[size-1]=='Y')cout<<"NOT INDIAN"<<endl;
		else if(s[0]=='Y')cout<<"NOT INDIAN"<<endl;
		else cout<<"NOT SURE"<<endl;
	}
} 
