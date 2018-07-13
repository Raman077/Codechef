#include<iostream>
#include<cstdio>
#include<cmath>
using namespace std;
int main()
{
	int t;
    cin>>t;
    int count =0;
    while(t--)
    {
    	int vert[6];
    	for (int x=0;x<6;x++)
    	{
    		cin>>vert[x];
		}
 
		int d1,d2,d3;
		d1=pow((vert[2]-vert[0]),2)+pow((vert[1]-vert[3]),2);
int max=d1;
		d2=pow((vert[2]-vert[4]),2)+pow((vert[3]-vert[5]),2);
		if(d2>max)max=d2;
		d3=pow((vert[0]-vert[4]),2)+pow((vert[1]-vert[5]),2);
		if(d3>max)max=d3;
//cout<<d1<<" "<<d2<<" "<<d3;
		if(max==d1+d2||max==d2+d3||max==d3+d1)
		count++;
	}
	cout<<count<<endl;
} 
