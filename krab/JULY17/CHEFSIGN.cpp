#include<iostream>
#include<cmath>
#include<cstring>
#include<set>
#include<vector>
#include<map>
#include<algorithm>
#include<sstream>
#include<climits>
#include<utility>
#define MX 100000
#define fs first
#define sec second
#define vi vector<int>
#define pi pair<int, int>
#define TC int T;cin>>T;while(T--)
#define loop(i,a,c) for(int i=0;i<a;i++)
#define loop1(i,a,c) for(int i=1;i<=a;i++)
#define pb(a) push_back(a)
#define all(a) (a).begin(), (a).end()
#define mp(x, y) make_pair((x), (y))
#define ll long long int
#define iter(c) typeof(c.begin())
#define foreach(it, c) for(iter(c) it = c.begin(); it != c.end(); it++)
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--){
		string s;
		cin>>s;
		
		ll p=s.length();
		ll dp1[p],dp2[p];
		ll count1,count2;
		
		if(s[0]=='>')
		{
			dp1[0]=1;
			count1=1;
			count2=0;
			dp2[0]=0;
		}
		else if(s[0]=='<')
		{
			dp1[0]=0;
			count1=0;			
			count2=1;
			dp2[0]=1;
		}
		else if(s[0]=='=')
		{
			dp1[0]=0;
			dp2[0]=0;
			count1=0;
			count2=0;
			//	cout<<dp1[0];
		}
 
		for(int i=1;i<s.length();i++)
		{
			if(s[i]=='>')
			{
				count1++;
				dp1[i]=max(count1,dp1[i-1]);
				count2=0;
				dp2[i]=dp2[i-1];
			}
			else if(s[i]=='<')
			{
				count1=0;
				count2++;
				dp1[i]=dp1[i-1];
				dp2[i]=max(count2,dp2[i-1]);
			}
			else
			{
				dp1[i]=dp1[i-1];dp2[i]=dp2[i-1];
			//	cout<<dp1[i]<<endl;
			}
		}
		//cout<<dp1[p-1];
		//cout<<dp2[p-1];
		cout<<max(dp1[p-1],dp2[p-1])+1<<endl;
	}
}
 
