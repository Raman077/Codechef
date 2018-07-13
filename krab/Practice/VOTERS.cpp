#include<iostream>
#include<algorithm>
#include<set>
using namespace std;
int main(){
	int n1,n2,n3;
	cin>>n1>>n2>>n3;
	int s=n1+n2+n3;
	set<int> a;
	int v[s];
	for(int i=0;i<s;i++)
	{
		cin>>v[i];
	}
     sort(v,v+s);
     for(int x=0;x<s-1;x++)
     {
     	if(v[x]==v[x+1])
     	{
		 a.insert(v[x]);
     	}
	 }
	 cout<<a.size()<<endl;
	 set <int> :: iterator it;
	 for(it=a.begin();it!=a.end();it++)
	 {
	 	cout<<*it<<endl;
	 }
}
 
