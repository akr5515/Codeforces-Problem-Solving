#include<bits/stdc++.h>
const int M=1e9+7;//M=300000;//
const int N=1e5+6;
#define pb push_back
#define mp make_pair
#define rep(i,n) for(int i=0;i<n;i++)
typedef long long int ll;
using namespace std;
 
ll t,mn(M),mx(-9e9);
 
void solve()
{
	ll n,k;
	string s;
	cin>>n>>k>>s;
	ll strt;
	for(ll i=0;i<n;i++){
		if(s[i]=='*'){
			strt=i;
			break;
		}
	}
	ll cnt=1;
	
	for(ll i=strt;i<n;){
		bool flag=false;
		for(ll j=min(n-1,i+k);j>i;j--){
			if(s[j]=='*'){
				i=j;
				cnt++;
				flag=true;
				break;
			}
		}
		if(flag==false){
			break;
		}
	}
	cout<<cnt<<endl;
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
 
 
