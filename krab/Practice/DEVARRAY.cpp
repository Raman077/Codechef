#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
int a,b;
cin>>a>>b;
int arr[a];
for (int i=0;i<a;i++)
{
cin >>arr[i];
}
sort(arr,arr+a);
while(b--)
{
int t;
cin>>t;
if(t>=arr[0]&&t<=arr[a-1]) cout<<"Yes"<<endl;
else cout<<"No"<<endl;
}
} 
