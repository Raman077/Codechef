#include<iostream>
#include<vector>
#include<set>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int size,done,num;
	set <int> s;
	cin>>size>>done;
	for(int a=1;a<=size;a++)
	{
		s.insert(a);
	}
	for(int a=1;a<=done;a++)
	{
		cin>>num;
		s.erase(num);
	}
		set <int>:: iterator it;
		int count =0,arr[size-done];
	for(it=s.begin();it!=s.end();it++)
	{
 
		arr[count]=*it;
		count++;
	}
	for(int x=0;x<size-done;x+=2)
	{
		cout<<arr[x]<<" ";
	}
	cout<<endl;
	for(int x=1;x<size-done;x+=2)
	{
		cout<<arr[x]<<" ";
	}
	cout<<endl;
}
} 
