#include<bits/stdc++.h>
const int M=INT_MAX;// M=1e9+7;//M=300000;//
const int N=1e5+5;
#define pb push_back
#define mp make_pair
typedef long long int ll;
using namespace std;
 
ll sum(0),k,n,m,x,y,z,t,i,j,ans(0),temp,mn(M),mx(-9e9);
string s;
 
void solve()
{
	cin>>n;
	ll a[n];
	cin>>a[0];
	ll b[2*n+6];
	memset(b,0,sizeof(b));
	
	b[a[0]]++;
	for(ll i=1;i<n;i++)
	{
		cin>>x;
		if(b[x]){
			a[i]=x+1;
			b[x+1]++;
		}else{
			a[i]=x;
			b[x]++;
		}
	}
	set<ll> s;
	for(ll i=0;i<n;i++)
	{
		s.insert(a[i]);
	}
	cout<<s.size()<<endl;
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
 
