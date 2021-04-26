#include<bits/stdc++.h>
const int M=INT_MAX;// M=1e9+7;//M=300000;//
const int N=1e6+5;
#define pb push_back
#define mp make_pair
typedef long long int ll;
using namespace std;
 
ll sum(0),k,n,m,x,y,z,t,i,j,ans(0),temp,mn(M),mx(-9e9);
 
void solve()
{
	cin>>n;
	ll bits[20];
	memset(bits,0,sizeof(bits));
	for(ll j=0;j<n;j++)
	{
		cin>>x;
		for(ll i=0;i<20;i++)
		{
			if(x&(1<<i))
			{
				bits[i]++;
			}
		}
	}
	ll ans=0;
	while(1)
	{
		ll flag=true;
		for(ll i=0;i<20;i++)
		{
			if(bits[i]!=0)
			{
				flag=false;
				break;
			}
		}
		if(flag==true)
		{
			break;
		}
		
		ll num=0;
		for(ll i=0;i<20;i++)
		{
			if(bits[i]>0)
			{
				num+=(ll)(1<<i);
				bits[i]--;
			}
		}
		ans+=num*num;
	}
	cout<<ans<<endl;
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
 
