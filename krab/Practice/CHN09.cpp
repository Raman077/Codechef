#include <iostream>
#include<algorithm>
#include<cstdio>
using namespace std;
 
int main() {
int t; cin>>t;
while(t--){	string s;
cin>>s;
sort(s.begin(),s.end());
int count=0;
for (int i=0;i<s.size();i++)
{
if(s[i]!='b')
count++;
else break;
}
 
int bcount=s.size()-count;
cout<<min(count,bcount)<<endl;
}
}
  
