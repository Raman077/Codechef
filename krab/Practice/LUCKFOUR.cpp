#include <iostream>
using namespace std;
 
int main() {
	// your code goes here
int p,j;
long int T;
long long int a;
cin>>T;
 
while(T--)
{
p=0;
cin>>a;
while(a>0)
{
j=a%10;
a=a/10;
if(j==4)
{
p++;}
 
}
	cout<<p<<endl;
}return 0;
}  
