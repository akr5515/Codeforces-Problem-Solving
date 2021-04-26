#include<bits/stdc++.h>
const int M=1e9+7;//M=300000;//
const int N=1e5+5;
#define pb push_back
#define mp make_pair
typedef long long int ll;
using namespace std;
 
ll sum(0),k,n,m,x,y,z,t,i,j,ans(0),temp,mn(M),mx(-9e9);
 
void solve()
{
	cin>>n;
	vector<ll> a(n);
	for(ll i=0;i<n;i++){
		cin>>a[i];
	}
	ll ans=0;
	sort(a.begin(),a.end());
	for(ll i=0;i<n;i++){
		ll first=a[i];
		ll second=a[i]+2;
		ll pos=upper_bound(a.begin(),a.end(), second)-a.begin();
		pos--;
		if(pos-i>=1){
			temp=pos-i-1;
			ans+=(temp*(temp+1)/2);
		}
	}
	cout<<ans<<endl;
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
 
