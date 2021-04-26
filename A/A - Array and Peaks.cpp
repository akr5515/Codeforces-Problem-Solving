#include<bits/stdc++.h>
const int M=1e9+7;//M=300000;//
const int N=1e5+6;
#define pb push_back
#define mp make_pair
#define rep(i,n) for(int i=0;i<n;i++)
typedef long long int ll;
using namespace std;
 
ll t,x,mn(M),mx(-9e9);
 
void solve()
{
	ll n,k;
	cin>>n>>k;
	
	if((k*2+1)>n){
		cout<<-1<<endl;
		return;
	}
	ll j=n,l=1,cnt=0;
	for(ll i=1;i<=n;i++){
		if(cnt>=k){
			cout<<l<<" ";
			l++;
			continue;
		}
		
		if(i%2==1){
			cout<<l<<" ";
			l++;
		}else{
			cout<<j<<" ";
			j--;
			cnt++;
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
 
