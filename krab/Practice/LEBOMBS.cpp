#include<iostream>
#include<vector>
#include<cstdio>
using namespace std;
int main()
{
	int t; cin>>t;
	while(t--)
	{
		int count=0;
		int size;
		cin>>size;
		string s;
		cin>>s;
		for (int i=0;i<s.size();i++)
		{
			if(s[i]=='1')
			{
				if(i>=1)
				s[i-1]='a'; 
				if(i<=size-1&&s[i+1]!='1')
				s[i+1]='a'; 
				s[i]='a';
			}
		}
		for (int x=0;x<size;x++)
		{
			if(s[x]=='0')count++;
		}
		cout<<count<<endl;
	}
} 
