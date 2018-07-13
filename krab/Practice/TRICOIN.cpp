#include <iostream>
#include<cmath>
using namespace std;
 
int main() {
	// your code goes here
int T,N,p,j;
cin>>T;
for(p=1;p<=T;p++)
{
cin >>N;
for(j=1;j<=N;j++)
{
if(j*(j+1)/2==N){
cout<<j<<endl;
 
break;}
else if(j*(j+1)/2>N){
cout<<j-1<<endl;
break;}
}}
 
	return 0;
} 
