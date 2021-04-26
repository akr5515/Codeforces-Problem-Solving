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
	string s;
	cin>>s;
	vector<pair<ll,char> > v(3);
	v[1].first=0;
	v[2].first=0;
	v[0].first=0;
	for(ll i=0;i<s.size();i++)
	{
		if(s[i]=='R')
		{
			v[1].first++;
		}else if(s[i]=='P')
		{
			v[2].first++;
		}else{
			v[0].first++;
		}
	}
	v[0].second='R';
	v[1].second='P';
	v[2].second='S';
	sort(v.begin(),v.end());
	for(ll i=0;i<s.size();i++)
	{
		cout<<v[2].second;
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
 
