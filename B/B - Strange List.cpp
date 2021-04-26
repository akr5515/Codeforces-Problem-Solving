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
	cin>>n>>x;
	ll a[n],dp[n][32],sum(0);
	memset(dp,0,sizeof(dp));
	for(ll i=0;i<n;i++){
		cin>>a[i];
		sum+=a[i];
		ll j=0;
		dp[i][j]=a[i];
		j++;
		while(a[i]%x==0){
			dp[i][j]=a[i]/x;
			j++;
			a[i]/=x;
		}
	}
	
	ll flag=0;
	for(ll j=1;j<31;j++){
		for(ll i=0;i<n;i++){
			if(dp[i][j]!=0){
				sum+=dp[i][0];
			}else{
				flag=1;
				break;
			}
		}
		if(flag==1){
			break;
		}
		//cout<<sum<<endl;
	}
	cout<<sum<<endl;
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
 
