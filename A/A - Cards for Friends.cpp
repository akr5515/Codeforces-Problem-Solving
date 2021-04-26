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
	cin>>x>>y>>n;
	ll a=1;
	while(x%2==0){
		a*=2;
		x/=2;
	}
	while(y%2==0){
		a*=2;
		y/=2;
	}
	if(a>=n){
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
