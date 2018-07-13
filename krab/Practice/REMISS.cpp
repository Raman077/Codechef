#include <iostream>
#include<algorithm>
using namespace std;
 
int main() {
	// your code goes here
int A,T,B,I;
cin >> T;
for (I =1;I <=T;I++)
{
 
cin>>A>>B;
cout<<max(A,B)<<' '<<A+B<<endl;
}
	return 0;
} 
