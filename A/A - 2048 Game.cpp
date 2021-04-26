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
	ll a[n+1];
	bool flag=false;
	for(ll i=0;i<n;i++){
		cin>>a[i];
		if(a[i]==2048){
			flag=true;
		}
	}
	if(flag==true){
		cout<<"YES"<<endl;
		return;
	}
	sort(a,a+n);
	ll cnt=1,x=2048;
	for(ll i=n-1;i>=0 && cnt;i--)
	{
		if(a[i]>x){
			continue;
		}else if(a[i]==x){
			cnt--;
		}else{
			x/=2;
			cnt*=2;
			i++;
		}
	}
	if(cnt==0){
		cout<<"YES"<<endl;
	}else cout<<"NO"<<endl;
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
