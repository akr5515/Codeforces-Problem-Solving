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
	string a,b;
	cin>>n>>a>>b;
	vector<ll> v;
	for(ll i=0;i<n;i++)
	{
		if(a[i]!=b[i])
		{
			v.pb(i+1);
			v.pb(1);
			v.pb(i+1);
		}
	}
	cout<<v.size()<<" ";
	for(ll i=0;i<v.size();i++)
	{
		cout<<v[i]<<" ";
	}
	cout<<endl;
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
