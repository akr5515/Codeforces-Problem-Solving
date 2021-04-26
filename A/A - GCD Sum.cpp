#include<bits/stdc++.h>
const int M=1e9+7;//M=300000;//
const int N=1e5+6;
#define pb push_back
#define mp make_pair
#define rep(i,n) for(int i=0;i<n;i++)
typedef long long int ll;
using namespace std;
 
ll sum(0),d,k,n,m,x,y,z,t,i,j,ans(0),temp,mn(M),mx(-9e9);
 
 
bool check(ll a)     
{
	ll temp=a;
	ll sum=0;
	while(temp){
		ll div=temp%10;
		temp/=10;
		sum+=div;
	}
	ll ans=__gcd(a,sum);
	if(ans>1){
		return false;
	}
	return true;
}
 
void solve()
{
	cin>>n;
	while(check(n)==true){
		n++;
	}
	cout<<n<<endl;
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
