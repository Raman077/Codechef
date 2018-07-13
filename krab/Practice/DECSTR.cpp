#include<iostream>
#include<cstdio>
#include<string>
#include<vector>
#include<algorithm>
using namespace std;
int main()
{
	int t;
	 cin>>t;
  while(t--)
{
	int k;
	cin>>k;
	string s;
	char c='a';
	while(k--)
	{
		s.push_back(c);
		if(c=='a'){
			c++;		
		s.push_back(c);
	}
	if(c=='z')
		c='a';
	else c++;
		
		
        
	}
	for (int i=s.size()-1;i>=0;i--)
	cout<<s[i];
cout<<endl;
}
 
} 
