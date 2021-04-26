#include<bits/stdc++.h>
const int M=INT_MAX;// M=1e9+7;//M=300000;//
const int N=1e5+5;
#define pb push_back
#define mp make_pair
typedef long long int ll;
using namespace std;
 
ll sum(0),k,n,m,x,y,z,t,i,j,ans(0),temp,mn(M),mx(-9e9);
 
void solve()
{
	cin>>n;
	ll w[n+1],sum=0;
	for(ll i=1;i<=n;i++){
		cin>>w[i];
		sum+=w[i];
	}
	vector<ll> in(n+1);
	for(ll i=1;i<=n-1;i++){
		cin>>x>>y;
		in[x]++;
		in[y]++;
	}
	
	pair<ll,ll> p;
	priority_queue<pair<ll,ll> > q;
	for(ll i=1;i<=n;i++){
		in[i]--;
		if(in[i]>0 ){
			q.push(make_pair(w[i],in[i]));
		}
	}
	cout<<sum<<" ";
	for(ll i=2;i<n;i++){
		p=q.top();
		sum+=p.first;
		cout<<sum<<" ";
		p.second--;
		q.pop();
		if(p.second>0){
			q.push(p);
		}
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
