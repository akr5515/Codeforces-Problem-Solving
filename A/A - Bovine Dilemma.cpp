#include<bits/stdc++.h>
const int M=INT_MAX;// M=1e9+7;//M=300000;//
const int N=1e6+5;
#define pb push_back
#define mp make_pair
typedef long long int ll;
using namespace std;
 
ll sum(0),k,n,m,x,y,z,t,i,j,ans(0),temp,mn(M),mx(-9e9);
string s;
 
double area( double x, double y)
{
	
	double ans=abs((y-x)/2);
	return ans;
}
 
void solve()
{
	cin>>n;
	ll a[n];
	for(ll i=0;i<n;i++)
	{
		cin>>a[i];
	}
	set<double> s;
	for(ll i=0;i<n-1;i++)
	{
		for(ll j=i+1;j<n;j++)
		{
			if(a[i]==a[j])
			{
				continue;
			}
			double ans=area((double) a[i], (double) a[j] );
			s.insert(ans);
		}
	}
	cout<<s.size()<<endl;
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
 
