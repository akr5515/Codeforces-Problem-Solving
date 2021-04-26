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
	string s;
	ll n,k;
	cin>>n>>k>>s;
	ll total=0,ans=0;
	ll seg=2*k+1;
	if(s[0]=='0')
	{
		for(ll i=0;i<=min(n-1,k);i++)
		{
			total+=(s[i]-'0');
		}
		if(total==0)
		{
			ans++;
			s[0]='1';
		}
	}
	total=0;
	if(s[n-1]=='0')
	{
		for(ll i=n-1;i>=max(n-1-k,(ll)0);i--)
		{
			total+=(s[i]-'0');
		}
		if(total==0)
		{
			ans++;
			s[n-1]='1';
		}
	}
	total=0;
	for(ll i=0;i<n;i++)
	{
		total+=(s[i]-'0');
		if(i>=seg-1)
		{
			if(total==0)
			{
				s[i-k]='1';
				total++;
				ans++;
			}
			if(s[i-seg+1]=='1')
			{
				total--;
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
 
