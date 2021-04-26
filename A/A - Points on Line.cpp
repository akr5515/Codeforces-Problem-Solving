#include<bits/stdc++.h>
const int M=INT_MAX;// M=1e9+7;//M=300000;//
const int N=1e6+5;
#define pb push_back
#define mp make_pair
typedef long long int ll;
using namespace std;
 
ll sum(0),k,n,m,x,y,z,t,i,j,ans(0),temp,mn(M),mx(-9e9);
 
void solve()
{
	ll d;
	cin>>n>>d;
	vector<ll> a(n);
	for(ll i=0;i<n;i++)
	{
		cin>>a[i];
	}
	ll ans=0;
	for(ll i=0;i<n;i++)
	{
		ll r=a[i]+d;
		ll ind=lower_bound(a.begin(),a.end(),r)-a.begin();
		if(a[ind]!=r|| ind==n)
		{
			ind--;
		}
		ll points=ind-i-1;
		ans+=(points*(points+1))/(2ll);
	}
	cout<<ans<<endl;
	
	
}
 
 
 
int main()
{
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	
	//cin>>t;
	//while(t--)
	{
		solve();
	}
}
 
