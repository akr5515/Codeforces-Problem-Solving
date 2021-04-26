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
	cin>>n;
	vector<pair<ll,ll> > ans;
	ans.pb({0,0});
	ans.pb({0,1});
	ll j=0;
	for(ll i=1;i<=n;i++)
	{
		ans.pb({i,j});
		ans.pb({i,j+1});
		ans.pb({i,j+2});
		j++;
	}
	ans.pb({n+1,j});
	ans.pb({n+1,j+1});
	cout<<ans.size()<<endl;
	for(auto i:ans)
	{
		cout<<i.first<<" "<<i.second<<endl;
	}
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
 
