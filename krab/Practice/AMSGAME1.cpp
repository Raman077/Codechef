#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
int gcd(int m, int n)
{
 
    if(n == 0) return m;
    return gcd(n, m % n);
}
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		vector <int>v;
		int p; cin>>p;
		
		for (int i=0;i<p;i++)
		{
			int s; cin>>s;
			v.push_back(s);
			if(i>0){
			
			v[i]=gcd(v[i-1],v[i]);
			
			}
		}
		cout<<v[p-1]<<endl;
	}
} 
