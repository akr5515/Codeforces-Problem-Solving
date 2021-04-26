#include<bits/stdc++.h>
const int M=1e9+7;//M=300000;//
const int N=1e5+6;
#define pb push_back
#define mp make_pair
#define rep(i,n) for(int i=0;i<n;i++)
typedef long long int ll;
using namespace std;
 
ll sum(0),k,n,x,y,z,t,i,j,ans(0),temp,mn(M),mx(-9e9);
 
void solve()
{
	cin>>n;
	while(n%2==0){
		n/=2;
	}
	if(n==1){
		cout<<"NO"<<endl;
	}else{
		cout<<"YES"<<endl;
	}
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
 
