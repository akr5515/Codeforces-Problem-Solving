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
	ll a,b;
	cin>>a>>b;
	if(a==b)
	{
		cout<<0<<endl;
		return;
	}
	if(a>b)
	{
		swap(a,b);
	}
	if(b%a!=0)
	{
		cout<<-1<<endl;
		return;
	}
	ll n=b/a;
	ll ans=0;
	while(n%8==0)
	{
		n/=8;
		ans++;
	}
	while(n%4==0)
	{
		n/=4;
		ans++;
	}
	while(n%2==0)
	{
		n/=2;
		ans++;
	}
	if(n==1)
	{
		cout<<ans<<endl;
		return;
	}else cout<<-1<<endl;
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
