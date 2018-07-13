#include <iostream>
#include<cmath>
using namespace std;
 
int main() {
	// your code goes here
int T,N,I,j,p;
cin>>T;
for (I= 1;I <=T;I++)
{p=0;
cin>>N;
while (N!=0){
 
j=N%10;
N=N/10;
p=p+j;
}
cout <<p<<endl;}
 
	return 0;
} 
