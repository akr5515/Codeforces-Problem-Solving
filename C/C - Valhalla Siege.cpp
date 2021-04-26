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
	ll q;
	cin>>n>>q;
	ll a[n];
	cin>>a[0];
	for(ll i=1;i<n;i++){
		cin>>a[i];
		a[i]+=a[i-1];
	}
	ll left=0;
	bool flag=false;
	for(ll i=0;i<q;i++){
		cin>>k;
		k+=left;
		ll pos=upper_bound(a,a+n,k)-a;
		pos=n-pos;
		if(pos==0){
			pos=n;
			flag=true;
		}
		cout<<pos<<endl;
		if(flag==true){
			left=0;
			flag=false;
		}else{
			left=k;
		}
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
