#include<bits/stdc++.h>
const int M=1e9+7;//M=300000;//
const int N=1e5+5;
#define pb push_back
#define mp make_pair
typedef long long int ll;
using namespace std;
 
ll sum(0),k,n,m,x,y,z,t,i,j,ans(0),temp,mn(M),mx(-9e9);
vector<ll> v;
 
void prime(ll n){
	bool prim[n];
	memset(prim,true,sizeof(prim));
	for(ll i=2;i*i<=n;i++){
		if(prim[i]==true){
			for(ll j=i*i;j<=n;j+=i){
				prim[j]=false;
			}
		}
	}
	for(ll i=2;i<=n;i++){
		if(prim[i]==true){
			v.pb(i);
		}
	}
}
 
 
void solve()
{
	/*for(ll i=0;i<v.size();i++){
		cout<<v[i]<<" ";
	}*/
	cin>>n;
	ll ans=1,last,pos;
	for(ll i=0;i<v.size();i++){
		if(v[i]>=n+1){
			ans*=v[i];
			last=v[i];
			pos=i;
			break;
		}
	}
	for(ll i=pos;i<v.size();i++){
		if(v[i]>=last+n){
			ans*=v[i];
			break;
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
	prime(1000000);
	while(t--)
	{
		solve();
	}
}
 
