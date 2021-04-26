#include<bits/stdc++.h>
const int M=1e9+7;//M=300000;//
const int N=1e5+5;
#define pb push_back
#define mp make_pair
#define rep(i,n) for(int i=0;i<n;i++)
typedef long long int ll;
using namespace std;
 
ll sum(0),k,n,m,x,y,z,t,i,j,ans(0),temp,mn(M),mx(-9e9);
 
void solve()
{
	cin>>n;
	n*=2;
	ll a[n];
	for(ll i=0;i<n;i++){
		cin>>a[i];
	}
	ll pos,mx=-1;
	for(ll i=0;i<n;i++){
		if(a[i]>mx){
			pos=i;
			mx=a[i];
		}
	}
	
	for(ll i=0;i<n;i++){
		if(pos==i){
			continue;
		}
		ll x=mx+a[i];
		multiset<ll> ms;
		vector<pair<ll,ll> > ans;
		for(ll i=0;i<n;i++){
			ms.insert(a[i]);
		}
		bool flag=true;
		while(ms.empty()==false){
			ll mx2=*ms.rbegin();
			ms.erase(ms.find(mx2));
			if(ms.find(x-mx2)==ms.end()){
				flag=false;
				break;
			}
			ans.pb({x-mx2,mx2});
			ms.erase(ms.find(x-mx2));
			x=mx2;
			
		}
		
		if(flag==true){
			cout<<"YES"<<endl;
			cout<<mx+a[i]<<endl;
			for(auto i: ans){
				cout<<i.first<<" "<<i.second<<endl;
			}
			return;
		}
	}
	cout<<"NO"<<endl;
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
 
