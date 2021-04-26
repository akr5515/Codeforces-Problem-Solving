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
	cin>>n>>m;
	ll a[101];
	memset(a,0,sizeof(a));
	for(ll i=0;i<n;i++)
	{
		cin>>x;
		a[x]++;
	}
	ll ans=0;
	for(ll i=0;i<m;i++)
	{
		cin>>x;
		if(a[x]>0)
		{
			ans++;
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
