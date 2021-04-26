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
	ll a[n],mx=0,mn=99999,mx_pos,mn_pos;
	for(ll i=0;i<n;i++){
		cin>>x;
		if(mx<x){
			mx_pos=i;
			mx=x;
		}
		
		if(mn>x){
			mn_pos=i;
			mn=x;
		}
		
		if(mn==x){
			mn_pos=i;
		}
	}
	if(mx_pos>mn_pos){
		mn_pos++;
	}
	cout<<mx_pos+(n-1-mn_pos)<<endl;
	
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
 
