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
using namespace std;
int main()
{
	
	int t;
	cin>>t;
	while(t--)
	{
	unsigned long long k;
	cin>>k;
	if(k%2==1)
	{
		if((k-1)%4==0)
		{
			cout<<'a'<<endl;
		}
		else cout<<'c'<<endl;
	}
	else
	{
		ll p=k;
		while(p%2==0)
		p=p/2;
		if((p-1)%4==0)
		{
			cout<<'a'<<endl;
		}
		else cout<<'c'<<endl;
	}
}
}
 
