#include<iostream>
#include<stdio.h>
#include<cmath>
#include<algorithm>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		float p,s,a,c,b,vol1,vol2,res;
		cin>>p>>s;
        a=(p+sqrt(pow(p,2)-24*s))/12;
        b=(p-sqrt(pow(p,2)-24*s))/12;
        c=p/4-2*a;
        vol1=pow(a,2)*c;
        c=p/4-2*b;
        vol2=pow(b,2)*c;
        res=max(vol1,vol2);
        printf("%.2f",res);
        cout<<endl;
	}
}
 
