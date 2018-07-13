#include <iostream>
#include<cstdio>
#include<algorithm>
using namespace std;
 
int main()
{
int t; cin>>t;
while(t--)
{
	int p; cin>>p;
	string s;
	cin>>s;
	sort(s.begin(),s.end());
	int b=0,g=0,r=0;
	for(int i=0;i<p;i++)
	{
	if(s[i]=='B')b++;
	else if(s[i]=='G')g++;
	else if(s[i]=='R')r++;
	}
	//cout<<b<<g<<r<<endl;
	int t=max(g,r);
	int x=min(g,r);
	cout<<min(t,b)+x<<endl;
}
}  
