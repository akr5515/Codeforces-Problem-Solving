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
	cin>>n;
	ll mn=INT_MAX,a[n];
	for(ll i=0;i<n;i++){
		cin>>a[i];
		mn=min(mn,a[i]);
	}
	for(ll i=0;i<n;i++)
	{
		a[i]-=mn;
	}
	
	ll left=mn%n,i,j=0;
	for(i=left;i<n+left;i++){
		if(a[i%n]-j<=0){
			break;
		}
		j++;
	}
	cout<<i%n+1<<endl;
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
 
 
