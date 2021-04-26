#include<bits/stdc++.h>
const int M=INT_MAX;// M=1e9+7;//M=300000;//
const int N=1e6+5;
#define pb push_back
#define mp make_pair
typedef long long int ll;
using namespace std;
 
ll sum(0),k,n,m,x,y,z,t,i,j,ans(0),temp,mn(M),mx(-9e9);
string s;
 
void solve()
{
	cin>>n;
	ll a[n],odd=0,even=0;
	for(ll i=0;i<n;i++)
	{
		cin>>a[i];
		if(i%2==0)
		{
			even+=a[i];
		}else{
			odd+=a[i];
		}
	}
	ll flag=1;
	if(odd>even)
	{
		flag=0;
	}
	for(ll i=0;i<n;i++)
	{
		if(i%2==flag)
		{
			cout<<1<<" ";
		}else cout<<a[i]<<" ";
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
 
