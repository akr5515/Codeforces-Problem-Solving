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
	ll a[n],sum=0,one(0),two(0);
	for(ll i=0;i<n;i++){
		cin>>a[i];
		sum+=a[i];
		if(a[i]==1){
			one++;
		}else two++;
	}
	if(sum%2==1){
		cout<<"NO"<<endl;
		return;
	}else{
		ll div=sum/2;
		if(div%2==0){
			cout<<"YES"<<endl;
			return;
		}else{
			if(one<=1){
				cout<<"NO"<<endl;
				return;
			}else{
				cout<<"YES"<<endl;
			}
		}
	}
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
 
