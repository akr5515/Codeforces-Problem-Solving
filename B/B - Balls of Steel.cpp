#include<bits/stdc++.h>
const int M=INT_MAX;// M=1e9+7;//M=300000;//
const int N=1e6+5;
#define pb push_back
#define mp make_pair
typedef long long int ll;
using namespace std;
 
ll sum(0),k,n,m,x,y,z,t,i,j,ans(0),temp,mn(M),mx(-9e9);
 
double geometry(ll x,ll y,ll a,ll b)
{
 
	double ans;
	ans=( abs(x-a)+abs(y-b)); //=sqrt(square(x-a)+square(y-b))
	return ans;
}
 
 
void solve()
{
	cin>>n>>k;
	vector<pair<ll,ll> > v(n);
	for(ll i=0;i<n;i++)
	{
		cin>>v[i].first>>v[i].second;
	}
	bool flag=false;
	for(ll i=0;i<n;i++)
	{
		ll cnt=0;
		for(ll j=0;j<n;j++)
		{
			double temp=geometry(v[i].first,v[i].second,
			v[j].first,v[j].second);
			
			if(temp<=k)
			{
				cnt++;
			}
		}
		if(cnt==n)
		{
			flag=true;
			break;
		}
	}
	if(flag==true)
	{
		cout<<1<<endl;
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
 
