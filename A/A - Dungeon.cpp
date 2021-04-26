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
	ll a,b,c;
	cin>>a>>b>>c;
	ll sum=a+b+c;
	if(sum%9==0 && sum/9<=min({a,b,c}))
	{
		cout<<"YES"<<endl;
	}else cout<<"NO"<<endl;
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
