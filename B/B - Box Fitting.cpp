#include<bits/stdc++.h>
const int M=1e9+7;//M=300000;//
const int N=1e5+6;
#define pb push_back
#define mp make_pair
#define rep(i,n) for(int i=0;i<n;i++)
typedef long long int ll;
using namespace std;
 
ll sum(0),d,k,n,m,x,y,z,t,i,j,ans(0),temp,mn(M),mx(-9e9);
 
void solve()
{
	ll w;
	cin>>n>>w;
	
	multiset<ll> st;
	for(ll i=0;i<n;i++){
		cin>>x;
		st.insert(x);
	}
	ll hi=0;
	while(!st.empty()){
		hi++;
		ll len=w;
		while(!st.empty()){
			auto it = st.upper_bound(len);
			it--;
			if(it==st.end() || *it>len){
				break;
			}
			
			len-=*it;
			st.erase(it);
		}
	}
	cout<<hi<<endl;
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
 
