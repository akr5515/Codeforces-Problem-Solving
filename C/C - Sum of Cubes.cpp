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
	vector<ll> v;
	map<ll,ll> m;
	for(ll i=1;i*i*i<=n;i++){
		ll x=i*i*i;
		v.pb(x);
		m[x]=1;
	}
	bool flag=false;
	for(ll i=1;i*i*i<=n;i++){
		ll x=i*i*i;
		ll y=n-x;
		if(m[y]==1){
			flag=true;
			break;
		}
	}
	if(flag==true){
		cout<<"YES"<<endl;
	}else cout<<"NO"<<endl;
	
	
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
 
 
