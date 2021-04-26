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
	ll a,b;
	string s;
	cin>>a>>b>>s;
	vector<ll> both;
	ll n=s.size();
	
	for(ll i=0;i<n/2;i++){
		ll rt=n-1-i;
		//cout<<i<<" "<<rt<<endl;
		if(s[i]=='?' || s[rt]=='?'){
			if(s[i]=='?' && s[rt]=='?')
			{
				both.pb(i);
				continue;
			}
			if(s[i]=='?'){
				if(s[rt]=='1'){
					s[i]='1';
					b-=2;
				}else{
					s[i]='0';
					a-=2;
				}
			}else{
				if(s[i]=='1'){
					s[rt]='1';
					b-=2;
				}else{
					s[rt]='0';
					a-=2;
				}
			}
		}else{
			if(s[i]!=s[rt]){
				cout<<-1<<endl;
				return;
			}else if(s[i]=='0'){
				a-=2;
			}else{
				b-=2;
			}
		}
	}
	if((n%2)==1){
		if(s[n/2]=='?'){
			if(a==0 && b==0){
				cout<<-1<<endl;
				return;
			}
			
			if(a%2==1){
				s[n/2]='0';
				a--;
			}else if(b%2==1){
				s[n/2]='1';
				b--;
			}
		}else{
			if(s[n/2]=='0'){
				if(a<=0){
					cout<<-1<<endl;
					return;
				}
				a--;
			}else{
				if(b<=0){
					cout<<-1<<endl;
					return;
				}
				b--;
			}
		}
	}
	
	/*if(both.size()!=0 && (a%2==1 || b%2==1)){
		cout<<-12<<endl;
	}*/
	//cout<<a<<" "<<b<<endl;
	ll m=both.size();
	for(ll i=0;i<both.size();i++){
		ll pos=both[i];
		ll rt=n-1-both[i];
		//cout<<pos<<" "<<rt<<endl;
		if(a>0){
			s[pos]='0';
			s[rt]='0';
			a-=2;
		}else if(b>0){
			s[pos]='1';
			s[rt]='1';
			b-=2;
		}
	}
	
	if(a>0 || b>0){
		cout<<-1<<endl;
		return;
	}
		//cout<<a<<" "<<b<<endl;
 
	cout<<s<<endl;
	
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
 
