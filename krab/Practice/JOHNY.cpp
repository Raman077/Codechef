#include<iostream>
#include<set>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
	
    int a;
    long long to_find;
	cin>>a;
	long long Arr[a];
set <long long> v;
for (long long i=0;i<a;i++)
{
	cin>>Arr[i];
	v.insert(Arr[i]);
	
}
    set <long long>::iterator it;
    /*for(it=v.begin();it!=v.end();it++)
    {
    	cout<<*it<<endl;
	}
     */
     cin>>to_find;
     int count =1,val;
        it=v.find(Arr[to_find-1]);
        val=*it;
        
     for(it=v.begin();it!=v.find(Arr[to_find-1]);it++)
     {
	 count++;
  
}
cout<<count<<endl;
}
 
}
 
