#include <iostream>
#include <algorithm>
using namespace std;
 
int main() {
int t; cin>>t; while(t--){
	int a[3];
	for (int x=0;x<3;x++)
	{
	    cin>>a[x];
	}
	sort(a,a+3);
	cout<<a[1]<<endl;
}
} 
