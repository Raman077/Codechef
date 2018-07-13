#include<iostream>
#include<algorithm>
#include<vector>
#define ll long long int
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int size;
		cin>>size;
		vector <ll> v;
		//int arr[size];
		for (int i=0;i<size;i++)
		{
			int p;
			cin>>p;
			v.push_back(p+i);
		}
		sort(v.begin(),v.end());
		cout<<v[v.size()-1]<<endl;
	}
} 
