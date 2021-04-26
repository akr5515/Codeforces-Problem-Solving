#include<bits/stdc++.h>
const int M=1e9+7;//M=300000;//
const int N=1e5+6;
#define pb push_back
#define mp make_pair
#define rep(i,n) for(int i=0;i<n;i++)
typedef long long int ll;
using namespace std;
 
ll t,x,mn(M),mx(-9e9);
 
void solve()
{
	ll n;
	cin>>n;
	ll a[n];
	for(ll i=0;i<n;i++){
		cin>>a[i];
	}
	if(a[0]!=a[1] && a[0]!=a[2]){
		cout<<1<<endl;
		return;
	}
	
	if(a[n-1]!=a[n-2] && a[n-1]!=a[n-3]){
		cout<<n<<endl;
		return;
	}
	
	for(ll i=1;i<n-1;i++){
		if(a[i]!=a[i-1] && a[i]!=a[i+1]){
			cout<<i+1<<endl;
			return;
		}
	}
	
}
 
 
int main()
{
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	
	cin>>t;
	while(t--)
	{
		solve();
	}
}
 
 
