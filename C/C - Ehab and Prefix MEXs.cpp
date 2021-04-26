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
	ll a[n];
	set<ll> s;
	for(ll i=0;i<2*n;i++)
	{
		s.insert(i);
	}
	bool flag=false;
	for(ll i=0;i<n;i++)
	{
		cin>>a[i];
		if(a[i]>i+1)
		{
			flag=true;
		}
		s.erase(a[i]);
	}
	if(flag==true)
	{
		cout<<-1<<endl;
		return;
	}
	vector<ll> v;
	for(ll i=0;i<n;i++)
	{
		v.pb(*s.begin());
		s.erase(*s.begin());
		if(i+1<n && a[i]!=a[i+1])
		{
			s.insert(a[i]);
		}
	}
	for(auto i:v)
	{
		cout<<i<<" ";
	}
	cout<<endl;
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
 
