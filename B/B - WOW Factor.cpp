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
	string s;
	cin>>s;
	ll n=s.size();
	ll f[n],b[n];
	memset(f,0,sizeof(f));
	memset(b,0,sizeof(b));
	
	for(ll i=1;i<n;i++)
	{
		if(s[i]=='v' && s[i-1]=='v')
		{
			f[i]=f[i-1]+1;
		}else{
			f[i]=f[i-1];
		}
	}
 
	
	for(ll i=n-2;i>=0;i--)
	{
		if(s[i]=='v' && s[i+1]=='v')
		{
			b[i]=b[i+1]+1;
		}else{
			b[i]=b[i+1];
		}
		
	}
	
	ll ans=0;
	for(ll i=0;i<n;i++)
	{
		if(s[i]=='o')
		{
			ans+=(f[i]*b[i]);
		}
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
