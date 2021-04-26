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
	ll n,k;
	cin>>n>>k;
	map<ll,ll> m;
	set<ll> s;
	ll a[n],mx=0;
	for(ll i=0;i<n;i++){
		cin>>x;
		mx=max(x,mx);
		m[x]++;
		s.insert(x);
	}
	
	ll pos=0;
	while(1){
		if(m[pos]==0){
			break;
		}else{
			pos++;
		}
	}
	//cout<<i<<endl;
 
		ll st = (mx+pos+1)/2;
		
		if(st>mx){
			cout<<n+k<<endl;
		}else if(m[st]==1 || k==0){
			cout<<n<<endl;
		}else{
			cout<<n+1<<endl;
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
 
