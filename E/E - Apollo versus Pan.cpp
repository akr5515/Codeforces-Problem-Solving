#include<bits/stdc++.h>
const int M=1e9+7;//M=300000;//
const int N=1e5+5;
#define pb push_back
#define mp make_pair
typedef long long int ll;
using namespace std;
 
ll sum(0),k,n,m,x,y,z,t,i,j,ans(0),temp,mn(M),mx(-9e9);
 
void solve()
{
	cin>>n;
	 ll a[n];
	for(ll i=0;i<n;i++)
	{
		cin>>a[i];
	}
	ll pw[60];
	pw[0]=1;
	ll c=1;
	for(ll i=1;i<=60;i++){
		pw[i]=(pw[i-1]*2)%M;
	}
	
	ll bit[100];
	memset(bit,0,sizeof(bit));
	for(ll i=0;i<n;i++){
		for(ll j=0;j<60;j++){
			if(a[i]>>j & 1){
				bit[j]++;
			}
		}
	}
	ll ans=0;
	for(ll j=0;j<n;j++){
		ll cons=a[j],a1(0),a2(0);
		
		for(ll i=0;i<60;i++){
			if(cons>>i & 1){
				a1=(a1+(pw[i]*bit[i])%M)%M;
			}
		}
		
		for(ll i=0;i<60;i++){
			if(cons>>i & 1){
				a2=(a2+(pw[i]*n)%M)%M;
			}else{
				a2=(a2+(pw[i]*bit[i])%M)%M;
			}
		}
		ans=(ans+(a1*a2)%M)%M;
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
 
