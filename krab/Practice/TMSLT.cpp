#include<iostream>
#include<cmath>
#include<cstdio>
#include<algorithm>
#include<ctime>
#define mod 1000000
#include<cstring>
#define ll long long int
using namespace std;
int main()
{
	int t; scanf("%d",&t);
	while(t--)
	{
	ll N,a,b,c,d;
	scanf("%lld %lld %lld %lld %lld",&N,&a,&b,&c,&d);
	ll arr[mod];
    for (ll i=0;i<mod;i++)
    arr[i]=0;
 
	ll sum1=0,sum2=0;
	arr[d]++;
    ll prev;
    prev=d;
	
	for (ll i=1;i<N;i++)
	{
        prev=(a * prev*prev + b * prev + c)%mod;
		arr[prev]++;
	}
	//sort(arr,arr+N);
	int p=1;
	for(ll i=0;i<mod;i++)
	{
		if(arr[i]%2==1)
		{
			if(p==1)
			{
				sum1+=i;
				p=0;
			}
			else
		{
			sum2+=i;
			p=1;
		}
		}
		
	}
     	
//	cout<<sum1<<" "<<sum2<<endl;
	printf("%lld\n",abs(sum1-sum2));
	//int t=clock();
	//cout<<t/CLOCKS_PER_SEC;
}
}      
