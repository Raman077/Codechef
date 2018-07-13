#include<iostream>
#include<vector>
#include<algorithm>
#include<cmath>
using namespace std;
int main()
{
	int n,d;
	cin>>n>>d;
	int count=0;
	vector <int> v;
	int arr[n];
	for (int i=0;i<n;i++) cin>>arr[i];
	sort(arr,arr+n);
	//for (int i=0;i<n;i++) cout<<arr[i];
	for(int i=0;i<n;i++)
	{
		v.push_back(arr[i]);
		if(v.size()==2)
		{
			if(abs(v[0]-v[1])<=d)
			{
				count++;
				if(!v.empty())
				v.pop_back();
				if(!v.empty())
				v.pop_back();				
			}
		    else
		    {
		    	v[0]=v[1];
		    	if(!v.empty())
		    	v.pop_back();
			}
		}
		
	}
	cout<<count<<endl;
} 
