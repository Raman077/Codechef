#include <iostream>
#include<cmath>
using namespace std;
 
 int main() {
	// your code goes here
 int T,p,N;
int I,a;
cin>>T;
for(I =1;I<=T;I ++){
cin>>N;
for(p=6;p>0;p--)
{
a=N/pow(10,p);
if(a!=0){
 
cout<<a+N%10<<endl;
break;
}
}}
	return 0;
 
} 
