#include<iostream>
#include<cmath>
#include<cstring>
#include<set>
#include<vector>
#include<map>
#include<algorithm>
#include<queue>
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
		map<char,int>m;
		for(char i='a';i<='z';i++){
		m[i]=0;
		}
		int flag=0;
		string s1,s2;
		cin>>s1>>s2;
		for(int i=0;i<s1.size();i++){
			if(s1[i]=='*')continue;
			if(m[s2[i]]!=0){
				flag=-1;
				break;
			}
			else{
			m[s2[i]]=-1;
			int diff=s1[i]-s2[i];
			for(int j=i+1;j<s1.size();j++){
				if(s1[j]!=s1[i])continue;
			//	cout<<s1[j]<<" "<<s2[i]<<endl;
				if(s1[j]-s2[i]!=diff){
					flag=-1;
					break;
				}
				s1[j]='*';
			}
		}	
			if(flag==-1)break;
		}
		if(flag==-1)cout<<"NO"<<endl;
		else cout<<"YES"<<endl;
		
	}
}
 
