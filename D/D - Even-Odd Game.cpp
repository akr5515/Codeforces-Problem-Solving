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
	vector<ll> even,odd;
	for(ll i=0;i<n;i++){
		cin>>x;
		if(x%2==0){
			even.pb(x);
		}else odd.pb(x);
	}
	ll e=even.size();
	ll o=odd.size();
	
	sort(even.begin(),even.end(),greater<ll>());
	sort(odd.begin(),odd.end(),greater<ll>());
	ll c=0,i=0,j=0,alice(0),bob(0);
	while(i<e && j<o){
		if(c==0){
			if(even[i]>=odd[j]){
				alice+=even[i];
				i++;
			}else{
				j++;
			}
			c=1;
		}else{
			if(odd[j]>=even[i]){
				bob+=odd[j];
				j++;
			}else{
				i++;
			}
			c=0;
			
		}
	}
	
	vector<ll> left;
	for(ll x=i;x<e;x++){
		left.pb(even[x]);
	}
	for(ll x=j;x<o;x++){
		left.pb(odd[x]);
	}
	
	sort(left.begin(),left.end(),greater<ll>());
	
	for(ll i=0;i<left.size();i++){
		if(c==0){
			if(left[i]%2==0){
				alice+=left[i];
			}
			c=1;
		}else{
			if(left[i]%2==1){
				bob+=left[i];
			}
			c=0;
		}
	}
	if(alice>bob){
		cout<<"Alice"<<endl;
	}else if(alice<bob){
		cout<<"Bob"<<endl;
	}else cout<<"Tie"<<endl;
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
 
