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
	ll a[n],sum(0),ans(0);
	for(ll i=0;i<n;i++)
	{
		cin>>a[i];
		sum+=a[i];
	}
	ll mid=sum/n;
	
	for(ll i=0;i<n-1;i++)
	{
		if(a[i]==mid)
		{
			ans++;
		}else if(a[i]>mid)
		{
			a[i+1]+=(a[i]-mid);
			a[i]=mid;
			ans++;
		}else{
			a[i+1]-=(mid-a[i]);
			a[i]=mid;
			ans++;
		}
	}
	if(a[n-1]==mid)
	{
		ans++;
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
 
