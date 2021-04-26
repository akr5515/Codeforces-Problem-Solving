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
	cin>>n>>m;
	ll a[n],b[m+1];
	for(ll i=0;i<n;i++){
		cin>>a[i];
	}
	sort(a,a+n);
	for(ll i=1;i<=m;i++){
		cin>>b[i];
	}
	bool flag[m],done=false;
	ll j=1,ans=0;
	memset(flag,false,sizeof(flag));
	for(ll i=n-1;i>=0;i--){
		if(j>m){
			done=true;
		}
		
		if(done==false){
			if(b[a[i]]>b[j]){
				ans+=b[j];
				j++;
			}else{
				ans+=b[a[i]];
			}
		}else{
			ans+=b[a[i]];
		}
		//cout<<ans<<endl;
		
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
 
