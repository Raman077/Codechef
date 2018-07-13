#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
	long int a,n;
	cin>>n;
    long int Array[n];
	 for(a=0;a<n;a++)
	 cin>>Array[a];
 
    sort(Array,Array+n);
    for(int i=0;i<n;i++)
    {
    	cout<<Array[i]<<endl;
	}
 
 
 
}
 
