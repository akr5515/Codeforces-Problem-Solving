#include<bits/stdc++.h>
const int M=1e9+7;//M=300000;//
const int N=1e5+5;
#define pb push_back
#define mp make_pair
typedef long long int ll;
using namespace std;
 
ll sum(0),k,n,m,x,y,z,t,i,j,ans(0),temp,mn(M),mx(-9e9);
 
ll check(vector<ll> &v, ll x){
	ll total=0,j=0,sum(0);
	for(ll i=0;i<n;i++){
		sum+=v[i];
		if(sum==x){
			total+=(i-j);
			j=i+1;
			sum=0;
		}else if(sum>x){
			return -1;
		}
	}
	return total;
}
void solve()
{
	cin>>n;
	vector<ll> v(n);
	ll sum=0;
	for(ll i=0;i<n;i++)
	{
		cin>>v[i];
		sum+=v[i];
	}
	ll ans=n-1;
	for(ll i=1;i*i<=sum;i++){
		if(sum%i==0){
			ll a1=i;
			ll a2=sum/i;
			ll c1=check(v,a1);
			ll c2=check(v,a2);
			if(c1!=-1){
				ans=min(ans,c1);
			}
			if(c2!=-1){
				ans=min(ans,c2);
			}
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
