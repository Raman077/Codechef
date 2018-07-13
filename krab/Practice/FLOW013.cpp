#include<iostream>
using namespace std;
int main()
{
int t;
cin>>t;
while(t--)
{
int p1,p2,p3;
cin>>p1>>p2>>p3;
int sum=p1+p2+p3;
if(sum==180)
cout<<"YES"<<endl;
else cout<<"NO"<<endl;
}
} 
