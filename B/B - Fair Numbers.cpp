#include<bits/stdc++.h>
const int M=INT_MAX;// M=1e9+7;//M=300000;//
const int N=1e6+5;
#define pb push_back
#define mp make_pair
typedef long long int ll;
using namespace std;
 
ll sum(0),k,n,m,x,y,z,t,i,j,ans(0),temp,mn(M),mx(-9e9);
string s;
 
bool sol(ll z)
{
	ll x=z;
	while(z){
		ll temp=z%10;
		z/=10;
		if(temp==0)
		{
			continue;
		}
		if(x%temp!=0)
		{
			return false;
		}
	}
	return true;
}
 
void solve()
{
	cin>>n;
	while(1)
	{
		if(sol(n)==true)
		{
			cout<<n<<endl;
			return;
		}
		n++;
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
 
