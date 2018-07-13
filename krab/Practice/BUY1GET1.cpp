#include<iostream>
#include<algorithm>
#include<string>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		string s;
		int count =0,new_count =1;
		cin>>s;
		sort(s.begin(),s.end());
		//cout<<s<<endl;
		for (int i=1;i<s.length();i++)
		{
			if(s[i]==s[i-1])
			{
				new_count++;
				continue;
			}
			if(new_count%2==0)
			count=count+ new_count/2;
			else 
			count=count+ new_count/2+1;
			new_count= 1;
		}
		if(new_count%2==0)
			count=count+ new_count/2;
		else 
			count=count+ new_count/2+1;
		cout<<count<<endl;
	}
} 
