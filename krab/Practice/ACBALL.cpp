#include<bits/stdc++.h>
using namespace std;
 
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		string s1,s2;
		cin>>s1>>s2;
		int len=s1.length();
		for(int i=0;i<len;i++)
		{
			if(s1[i]=='B'&&s2[i]=='B')
			cout<<'W';
			else
			cout<<'B';
		}
		cout<<endl;
	}
	return 0;
}   
