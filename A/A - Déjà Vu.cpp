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
	string s;
	cin>>s;
	ll cnt=0;
	for( ll i=0;i<s.size();i++){
		if(s[i]=='a'){
			cnt++;
		}
	}
	if(cnt==s.size()){
		cout<<"NO"<<endl;
		return;
	}
	ll n=s.size(),i=0;
	cout<<"YES"<<endl;
	for(ll j=n-1;j>=0;j--){
		if(s[j]!='a'){
			i=n-j-1;
			break;
		}
	}
	//cout<<i<<endl;
	for(ll j=0;j<i;j++){
		cout<<s[j];
	}
	cout<<"a";
	for(ll j=i;j<s.size();j++){
		cout<<s[j];
	}
	cout<<endl;
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
 
