#include<iostream>
#include<string>
#include<cstdio>
#include<vector>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		string s;
		cin>>s;
		int max=0,max1=0,count=0,flag=1;
		//vector <int> v;
		for (int i=0;i<s.length();i++)
		{
			if(s[i]=='.')
			{
				max1++;
			}
			else
			{
				
				if(max1>max)
				{
					count++;
					max=max1;
				}
				max1=0;
			}
		}
		cout<<count<<endl;
	}
} 
