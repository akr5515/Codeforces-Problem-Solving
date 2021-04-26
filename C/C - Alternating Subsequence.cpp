#include<bits/stdc++.h>
const int M=1e9+7;// M=1e9+7;//M=300000;//
const int N=1e6+5;
#define pb push_back
#define mp make_pair
typedef long long int ll;
using namespace std;
 
ll sum(0),k,n,m,x,y,z,t,i,j,ans(0),temp,mn(M),mx(-9e9);
 
void solve()
{
	cin>>n;
	ll a[n];
	for(ll i=0;i<n;i++)
	{
		cin>>a[i];
	}
	ll ans=0,k(a[0]);
	if(n==1)
	{
		cout<<a[0]<<endl;
		return;
	}
	for(ll i=1;i<n;i++)
	{
		if( (a[i]>0 && a[i-1]<0) || (a[i]<0 && a[i-1]>0) )
		{
			ans+=k;
			k=a[i];
		}else{
			k=max(k,a[i]);
		}
		
		if(i==n-1)
		{
			ans+=k;
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
 
