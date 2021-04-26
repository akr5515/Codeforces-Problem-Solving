#include<bits/stdc++.h>
const int M=INT_MAX;// M=1e9+7;//M=300000;//
const int N=1e5+5;
#define pb push_back
#define mp make_pair
typedef long long int ll;
using namespace std;
 
ll sum(0),k,n,m,x,y,z,t,i,j,ans(0),temp,mn(M),mx(-9e9);
 
void solve()
{
	string s;
	cin>>s;
	n=s.size();
	if(n==1){
		cout<<0<<endl;
		return;
	}else if(n==2){
		if(s[0]==s[1]){
			cout<<1<<endl;
			return;
		}else cout<<0<<endl;
		
	}else{
		for(ll i=1;i<n;i++){
			if((s[i]==s[i-1]) || (i-2>=0 && s[i-2]==s[i]))
			{
				s[i]='*';
			}
		}
		
		ll ans=0;
		for(ll i=0;i<n;i++){
			if(s[i]=='*'){
				ans++;
			}
		}
		cout<<ans<<endl;
		
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
