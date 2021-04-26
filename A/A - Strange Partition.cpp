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
	cin>>n>>x;
	ll sum(0),mn,mx(0);
	for(ll i=0;i<n;i++)
	{
		cin>>m;
		sum+=m;
		ll temp=m/x;
		if(m%x!=0){
			temp++;
		}
		mx+=temp;
	}
	ll temp=sum/x;
	if(sum%x!=0){
		temp++;
	}
	cout<<temp<<" "<<mx<<endl;
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
