#include<iostream>
#include<utility>
#include<vector>
#include<string>
#include<algorithm>
using namespace std;
int main()
{
	int n,m,flag=0;
	cin>>n>>m;
	vector <pair<int,string> >v1,v2;
	pair<int,string>epair;
	int arr[n];
	for (int i=0;i<n;i++)
	{
	
	cin>>arr[i];
 
}
	int f,p;
	string s;
	for (int i=0;i<m;i++)
	{
		
		cin>>f>>p>>s;
		for (int z=0;z<n;z++)
		{
			
			if(f==arr[z])
			{
				//cout<<f<<endl;
				epair.first=p;
				epair.second=s;
				v1.push_back(epair);
				
				flag=1;
				//cout<<v1[v1.size()-1].second;
				break;
			}	
		}
		if(flag==0)
		{
		epair.first=p;
		epair.second=s;
		v2.push_back(epair);
		
	}
	flag=0;
	}
//	cout<<v1[0].second;
	
	sort(v1.begin(),v1.end());
	for (int i=v1.size()-1;i>=0;i--)
	   cout<<v1[i].second<<endl;
	sort(v2.begin(),v2.end());
	//cout<<v2[0].second;
	for (int i=v2.size()-1;i>=0;i--)
	   cout<<v2[i].second<<endl;
	
;} 
