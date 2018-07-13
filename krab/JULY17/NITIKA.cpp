#include<bits/stdc++.h>
using namespace std;
string c(string s){
	s[0]=toupper(s[0]);
	for(int i=1;i<s.length();i++)
	{
		s[i]=tolower(s[i]);
	}
	return s;
}
int main()
{
	int t;
	cin>>t;
	cin.ignore();
	
	while(t--)
	{
		string s;
		getline(cin,s);
		int counter=0;
		string words[3];
		for (int i = 0; i<s.length(); i++)
		{
    		if (s[i] == ' ')
         		counter++;
   		 	else
        		words[counter] += s[i];
		}
		for(int i=0;i<=counter-1;i++)
		{
			
			string p=c(words[i]);
			cout<<p[0]<<"."<<" ";
		}
		
		cout<<c(words[counter]);
		cout<<endl;
		
	}
} 
