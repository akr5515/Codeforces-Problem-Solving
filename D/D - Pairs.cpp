#include<bits/stdc++.h>
const int M=INT_MAX;// M=1e9+7;//M=300000;//
const int N=1e6+5;
#define pb push_back
#define mp make_pair
typedef long long int ll;
using namespace std;
 
ll sum(0),k,n,m,x,y,z,t,i,j,ans(0),temp,mn(M),mx(-9e9);
string s;
ll find_sol(vector<ll> &A, vector<ll> &B, ll n){
	ll lo=0,hi=n-1,ans=0;
	while(lo<=hi)
	{
		ll mid=(lo+hi)/2;
		bool flag=true;
		for(ll i=0;i<=mid;i++)
		{
			if(A[i]>B[n-1+i-mid]){
				flag=false;
			}
		}
		if(flag==true){
			ans=mid+1;
			lo=mid+1;
		}else{
			hi=mid-1;
		}
	}
	return ans;
}
void solve()
{
	cin>>n;
	ll a[2*n+1];
	memset(a,0,sizeof(a));
	for(ll i=0;i<n;i++)
	{
		cin>>x;
		a[x]=1;
	}
	vector<ll> A,B;
	for(ll i=1;i<=2*n;i++)
	{
		if(a[i]==1){
			B.pb(i);
		}else{
			A.pb(i);
		}
	}
	
	ll n1=find_sol(A,B,n);
	ll n2=n-find_sol(B,A,n);
	//cout<<n1<<" "<<n2<<endl;
	cout<<max((ll)0,n1-n2+1)<<endl;
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
 
