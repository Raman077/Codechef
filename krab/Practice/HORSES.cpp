#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int N,m;
		cin>>N;
		vector <int> s(N);
		for (int x=0;x<N;x++)
		{
			cin>>s[x];
			
		}
		m=abs(s[0]-s[1]);
		for(int i=0;i<N-1;i++)
		{
		
		for(int j=i+1;j<N;j++)
		{
			m=min(m,abs(s[i]-s[j]));
			//cout<<m<<endl;
		}
	
        }
        cout<<m<<endl;
	}
	
	
}
 
