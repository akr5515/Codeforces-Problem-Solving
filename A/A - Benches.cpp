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
	cin>>n>>m;
	ll mm=m;
	ll a[n],mx=-1;
	for(ll i=0;i<n;i++)
	{
		cin>>a[i];
		mx=max(mx,a[i]);
	}
	sort(a,a+n);
	for(ll i=n-2;i>=0 && m;i--)
	{
		temp=(mx-a[i]);
		if(temp<m){
			a[i]+=temp;
			m-=temp;
		}else{
			a[i]+=m;
			m=0;
		}
	}
	if(m==0){
		cout<<a[n-1]<<" "<<mx+mm<<endl;
	}else{
		ll div=m/n;
		if(m%n!=0){
			div++;
		}
		cout<<a[n-1]+div<<" "<<mx+mm<<endl;
	}
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
 
