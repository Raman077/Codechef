#include<iostream>
#include<string>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int count =0;
		string s;
		cin>>s;
		for (long long int i=0;i<s.size();i++)
		{
			if(s[i]!='4'&&s[i]!='7')
			{
				count++;
			}
		}
		cout<<count<<endl;
	}
} 
