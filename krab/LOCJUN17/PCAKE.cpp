#include<iostream>
#include<bits/stdc++.h>
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
int isprime[1000005]={0};
int in[1000005]={0};
long long factor[1000005];
map<long long ,long long >m;
map<long long ,long long >::iterator it;
void s()
{
    for(long i=2;i<1001;i++)
    {
        if(isprime[i]==1)
            continue;
        else
        {
            for(long j=2*i;j<=1001;j=j+i)
            {
            	//cout<<j;<<endl;
                isprime[j]=1;
                factor[j]=i;
 
            }
        }
    }
  
}
void f()
{
    for(long k=2;k<=1000;k++){
        long long x=k;
        while(isprime[x]!=0)
        {
 
            m[factor[x]]++;
            //cout<<m[factor[x]];
 
            x=x/(factor[x]);
        }
 
        m[x]++;
 
 
        long long flag=0;
        for(it=m.begin();it!=m.end();it++)
        {
            if(it->second>1)
            {
                flag=1;
                break;
            }
 
        }
        m.clear();
        if(flag==0){
        //	cout<<k<<" ";
            in[k]=1;}
 		
}
}
int main()
{
	
	
	int t;
	cin>>t;
	
	while(t--)
	{
		int n;
		cin>>n;
		int arr[n];
		ll count=0;
		int flag=0;
		int p=0;
 
		for(int i=0;i<n;i++)
		{
			cin>>arr[i];
			if(arr[i]!=1)
			{
				flag=1;
				
			}
			if(in[arr[i]])p++;
		}
	//	for(int i=0;i<n;i++)cout<<in[i];
		if(flag==0)
		{
			cout<<n*(n+1)/2<<endl;
		}
		else
		{
		
		s();
		f();
		in[1]=1;
		
		//set<int>s;
		for(int i=0;i<n;i++)
		{
			bool visited[1001]={0};	
			if(in[arr[i]]){
			visited[arr[i]]=true;
			count++;
			for(int j=i+1;j<n;j++)
			{
			
				if(visited[arr[j]]&&arr[j]!=1)
				{
					break;
				}
				else if(!in[arr[j]])
				{
					break;
				}
				else
				{
					visited[arr[j]]=true;
					count++;
					//cout<<"i="<<i<<" j="<<j<<endl;
					//cout<<count<<endl;
				}
			}
		}
		}		
		cout<<count<<endl;
	}
	}
}  
