#include<bits/stdc++.h>
using namespace std;
map<double, double>m;
int main()
{
	//freopen("train.txt", "r",stdin);
	//freopen("test.txt","w",stdout);
	int t;
	cin>>t;
	while(t--){
		int a,b,c;
		cin>>a>>b>>c;
		double arr[a];
		for(int i=0;i<a;i++){
			double x;
			cin>>x;
			arr[i]=x;
			m[x]++;
		}
	//	cout<<m[b]<<m[c]<<endl;
		cout<<setprecision(10)<<(double)(m[b]*m[c]/(a*a))<<endl;
		m.clear();
	}
	
	
} 
