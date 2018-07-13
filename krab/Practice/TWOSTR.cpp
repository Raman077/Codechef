#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{   int count=0;
		string s1,s2;
		cin>>s1>>s2;
		if(s1.length()!=s2.length())
		{
			cout<<"No"<<endl;
		}
		else
		{
		for (int i=0;i<s1.length();i++)
		{
			if(s1[i]==s2[i]||s1[i]=='?'||s2[i]=='?')
			{
				count++;
			}
			else break;
		}
		if(count==s1.length()) cout<<"Yes"<<endl;
		else cout<<"No"<<endl;
		}
	}
} 
