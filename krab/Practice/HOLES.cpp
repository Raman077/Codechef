#include<iostream>
#include<string>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		string s;
		cin>>s;
		int count=0;
		for (int i=0;i<s.length();i++)
		{
			if(s[i]=='A'||s[i]=='Q'||s[i]=='R'||s[i]=='D'||s[i]=='O'||s[i]=='P')
			count++;
			else if(s[i]=='B') count+=2;
		}
		cout<<count<<endl;
	}
} 
