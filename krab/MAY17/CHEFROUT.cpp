#include<iostream>
#include<string>
using namespace std;
int main()
{
	string s = "CES";
	int t;
	cin>>t;
	while(t--)
	{
		int count=0;
		string p ;
		cin>>p;
		int j=0;
		for(int i=0;i<p.length();i++)
		{
			while(s[j]==p[i])
			{
			count++;
			i++;
			}
			i--;
			j++;
			if(j==3) break;
		}
		if(count!=p.length())
		cout<<"no"<<endl;
		else cout<<"yes"<<endl;
	}
} 
