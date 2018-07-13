#include<iostream>
using namespace std;
int main()
 
{
    int T,n,i,x,max;
     cin>>T;
     while(T--)
     {
int p=1;
     	cin>>n;
     	int L[n],R[n];
     	for(i=0;i<n;i++)
     	 {
     	 	cin>>L[i];
		  }
		for(int a=0;a<n;a++)
		{
			cin>>R[a];
		  }  
 
		  max=L[0]*R[0];
           x=R[0];
 
		  for (int j=1;j<n;j++)
		  {
		  	if(L[j]*R[j]>max)
		  	 {
		  	 	max=L[j]*R[j];
		  	 	x=R[j];
		  	 	p=j+1;
			   }
			else if(L[j]*R[j]==max)
			 {
			 	if (R[j]>x)
			 	 {
			 	 	max=L[j]*R[j];
			 	 	x=R[j];
			 	 	p=j+1;
				  }
 
 
			 }
 
		  }
		  cout <<p<<endl;
	 }
 
} 
