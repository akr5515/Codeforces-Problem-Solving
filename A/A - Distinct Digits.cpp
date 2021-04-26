#include<bits/stdc++.h>
const int M=1e9+7;//M=300000;//
const int N=1e5+5;
#define pb push_back
#define mp make_pair
#define rep(i,n) for(int i=0;i<n;i++)
typedef long long int ll;
using namespace std;
 
ll sum(0),k,n,x,y,z,t,i,j,ans(0),temp,mn(M),mx(-9e9);
 
void solve()
{
	ll l,r;
	cin>>l>>r;
	for(ll i=l;i<=r;i++){
		ll x=i;
		bool flag=true;
		map<ll,ll> m;
		while(x){
			ll temp=x%10;
			x/=10;
			if(m[temp]==0){
				m[temp]++;
			}else{
				flag=false;
				break;
			}
		}
		if(flag==true){
			cout<<i<<endl;
			return;
		}
	}
	cout<<-1<<endl;
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
 
