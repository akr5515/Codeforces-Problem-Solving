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
	string s,t,s1="",s2="";
	cin>>s>>t;
	n=s.size();
	m=t.size();
	ll lcm=(n*m)/__gcd(n,m);
	//cout<<lcm<<endl;
	for(ll i=0;i<lcm/n;i++){
		s1+=s;
	}
	for(ll i=0;i<lcm/m;i++){
		s2+=t;
	}
	if(s1==s2){
		cout<<s1<<endl;
		
	}else cout<<-1<<endl;
 
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
 
