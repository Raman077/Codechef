#include<bits/stdc++.h>
using namespace std;
int main()
{
int t;
cin>>t;
while(t--)
{
stack<char> s;
string str;
cin>>str;
for (int i=0;i<str.size();i++)
{
if(str[i]=='-'||str[i]=='*'||str[i]=='/'||str[i]=='^'||str[i]=='+'||str[i]=='(')
s.push(str[i]);
else if(str[i]==')')
{
cout<<s.top();
if(!s.empty())
s.pop();
if(!s.empty())
s.pop();
}
else cout<<str[i];
}
cout<<endl;
}
} 
