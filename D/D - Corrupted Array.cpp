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
	ll n;
	cin>>n;
	ll a[n+5],sum=0;
	for(ll i=0;i<n+2;i++){
		cin>>a[i];
		//sum+=a[i];
	}
	sort(a,a+(n+2));
 
	for(ll i=0;i<n;i++){
		sum+=a[i];
	}
	if(sum==a[n]){
		for(ll i=0;i<n;i++){
			cout<<a[i]<<" ";
			
		}
		cout<<endl;
		return;
	}
	sum+=a[n];
	for(ll i=0;i<n+1;i++){
		ll temp=sum-a[i];
		if(temp==a[n+1]){
			for(ll j=0;j<n+1;j++){
				if(i==j){
					continue;
				}
				cout<<a[j]<<" ";
			}
			cout<<endl;
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
	
	cin>>t;
	while(t--)
	{
		solve();
	}
}
 
 
