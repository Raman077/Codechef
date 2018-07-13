#include<iostream>
#include<cmath>
#include<cstring>
#include<set>
#include<vector>
#include<map>
#include<algorithm>
#include<iomanip>
#include<queue>
#include<sstream>
#include<climits>
#include<utility>
#define MX 100007
#define pi pair<int, int>
#define TC int T;cin>>T;while(T--)
#define loop(i,a) for(int i=0;i<a;i++)
#define pb(a) push_back(a)
#define all(a) (a).begin(), (a).end()
#define mp(x, y) make_pair((x), (y))
#define ll long long int
#define FI ios_base::sync_with_stdio(false);cin.tie(0);
#define go(n,arr,i) ll n; cin>>n; ll arr[n]; loop(i,n)cin>>arr[i];
#define forit(i, c) for(__typeof((c).begin()) i = (c).begin(); i != (c).end(); i++)
using namespace std;
int main()
{
	TC
	{
		//m.clear();
		ll n,p;
		cin>>n;
		int arr[n];
		vector<int>vec;
		loop(i,6){
			vec.pb(i+1);
		}
		
		loop(i,n){
			cin>>arr[i];
			if(n==2)
			vec.erase(std::remove(vec.begin(), vec.end(), arr[i]), vec.end());
		}
	//	loop(i,6)cout<<vec[i]<<" ";
		ll a[7];
		if(n==1){
			cout<<6<<" "<<5<<" "<<4<<" "<<3<<" "<<2<<" "<<1<<endl;
			continue;
		}
		
		
		
		else if(n==2){
			if(arr[0]==arr[1]){
				cout<<-1<<endl;
			continue;
			}
			a[arr[0]]=vec[0];			
			a[vec[0]]=arr[0];
			a[arr[1]]=vec[1];			
			a[vec[1]]=arr[1];
			a[vec[2]]=vec[3];
			a[vec[3]]=vec[2];
			loop(i,6){
			cout<<a[i+1]<<" ";
		}
		cout<<endl;
		continue;
		}
		cout<<-1;
		cout<<endl;
	}
}
 
