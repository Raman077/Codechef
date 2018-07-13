#include<iostream>
using namespace std;
int main()
{
int t;cin>>t;
while(t--)
{
int a,b;
cin>>a>>b;
int count=0;
while(a!=b)
{
if(a>b){
count++;
 a=a/2;
}
else
{
count++;
b=b/2;
}
}
cout<<count<<endl;
}
} 
