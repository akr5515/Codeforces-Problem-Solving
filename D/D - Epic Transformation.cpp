#include<bits/stdc++.h>
const int M=1e9+7;//M=300000;//
const int N=1e5+6;
#define pb push_back
#define mp make_pair
#define rep(i,n) for(int i=0;i<n;i++)
typedef long long int ll;
using namespace std;
 
ll t,mn(M),mx(-9e9);
 
void solve()
{
	ll n;
	cin>>n;
	ll a[n];
	map<ll,ll> m;
	for(ll i=0;i<n;i++){
		cin>>a[i];
		m[a[i]]++;
	}
	ll mx=0;
	for(ll i=0;i<n;i++){
		mx=max(mx,m[a[i]]);
	}
	ll vanished = min((n/2)*2, (n-mx)*2);
	cout<<n-vanished<<endl;
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
 
