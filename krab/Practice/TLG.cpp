#include<iostream>
#include<cstdlib>
#include<algorithm>
using namespace std;
int main()
{
	
	int N,s,g=0,c=0,diff=0;
	cin>>N;
	int A,B;
	for(int a=0;a<N;a++)
	  {
	    cin>>A>>B;
        g+=A;
        c+=B;
        if((g-c)>0)
        {
        	diff=max(diff,g-c);
        	if( diff==g-c)
			s=1;
        	//cout<<diff<<endl;
		}
		else
		{
			diff=max(diff,c-g);
			 if(diff==c-g)
			 s=2;
			 
		//	cout<<diff<<endl;
		}
	
 
 
}
	cout<<s<<' '<<diff<<endl;
}
 
