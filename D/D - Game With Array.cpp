#include<bits/stdc++.h>
const int M=1e9+7;// M=1e9+7;//M=300000;//
const int N=1e6+5;
#define pb push_back
#define mp make_pair
typedef long long int ll;
using namespace std;
 
ll sum(0),k,n,m,x,y,z,t,i,j,ans(0),temp,mn(M),mx(-9e9);
 
void solve()
{
	ll n,s;
	cin>>n>>s;
	if(2*n<=s)
	{
		cout<<"YES"<<endl;
		for(ll i=0;i<n-1;i++)
		{
			cout<<2<<" ";
			s-=2;
		}
		cout<<s<<endl<<1<<endl;
	}else{
		cout<<"NO"<<endl;
	}
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
 
