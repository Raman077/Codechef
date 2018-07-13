#include<iostream>
#define ll unsigned long long int
using namespace std;
int main()
{
	ll t;
	cin>>t;
	while(t--)
	{
		ll n,k,div,mod;
		cin>>n>>k;
        if(k>0){
		div=n/k;
		mod=n%k;
		cout<<div<<" "<<mod<<endl;
}
else cout<<0<<" "<<n<<endl;
	}
} 
