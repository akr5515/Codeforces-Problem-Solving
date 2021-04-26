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
	string s;
	cin>>n>>s;
	for(ll i=0;i<=4;i++){
		string s1,s2;
		s1=s.substr(0,i);
		s2=s.substr(n-4+i);
		if(s1+s2=="2020"){
			cout<<"YES"<<endl;
			return;
		}
	}
	cout<<"NO"<<endl;
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
