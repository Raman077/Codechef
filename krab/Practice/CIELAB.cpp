#include<iostream>
using namespace std;
int main()
{
	int A,B,c;
	cin>>A>>B;
	c=A-B;
	if(c%10==9)
	c--;
	else
	c++;
	cout<<c<<endl;
}
 
