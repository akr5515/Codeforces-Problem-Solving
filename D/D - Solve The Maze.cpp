#include<bits/stdc++.h>
const int M=1e9+7;// M=1e9+7;//M=300000;//
const int N=1e6+5;
#define pb push_back
#define mp make_pair
typedef long long int ll;
using namespace std;
 
ll sum(0),k,n,m,x,y,z,t,i,j,ans(0),temp,mn(M),mx(-9e9);
 
bool isValid(ll i,ll j)
{
	if(i>=0 && i<n && j>=0 && j<m)
	{
		return true;
	}else return false;
}
 
void solve()
{
	cin>>n>>m;
	ll g=0;
	string s[n];
	for(ll i=0;i<n;i++)
	{
		cin>>s[i];
		for(ll j=0;j<m;j++)
		{
			if(s[i][j]=='G')
			{
				g++;
			}
		}
	}
	if(g==0)
	{
		cout<<"YES"<<endl;
		return;
	}
	
	for(ll i=0;i<n;i++)
	{
		for(ll j=0;j<m;j++)
		{
			if(s[i][j]=='B')
			{
				if(isValid(i+1,j) && s[i+1][j]=='.')
				{
					s[i+1][j]='#';
				}
				if(isValid(i-1,j) && s[i-1][j]=='.')
				{
					s[i-1][j]='#';
				}
				if(isValid(i,j+1) && s[i][j+1]=='.')
				{
					s[i][j+1]='#';
				}
				if(isValid(i,j-1) && s[i][j-1]=='.')
				{
					s[i][j-1]='#';
				}
			}
		}
	}
	
	if(s[n-1][m-1]=='#')
	{
		cout<<"NO"<<endl;
		return;
	}
	
	queue<pair<ll,ll> > q;
	q.push({n-1,m-1});
	bool vis[n][m];
	memset(vis,false,sizeof(vis));
	vis[n-1][m-1]=true;
	
	while(!q.empty())
	{
		pair<ll,ll> p=q.front();
		q.pop();
		ll i=p.first;
		ll j=p.second;
		if(isValid(i+1,j) && s[i+1][j]!='#' && vis[i+1][j]==false)
		{
			q.push({i+1,j});
			vis[i+1][j]=true;
		}
		if(isValid(i-1,j) && s[i-1][j]!='#' && vis[i-1][j]==false)
		{
			q.push({i-1,j});
			vis[i-1][j]=true;
		}
		if(isValid(i,j+1) && s[i][j+1]!='#' && vis[i][j+1]==false)
		{
			q.push({i,j+1});
			vis[i][j+1]=true;
		}
		if(isValid(i,j-1) && s[i][j-1]!='#' && vis[i][j-1]==false)
		{
			q.push({i,j-1});
			vis[i][j-1]=true;
		}
	}
	
	for(ll i=0;i<n;i++)
	{
		for(ll j=0;j<m;j++)
		{
			if((s[i][j]=='G'&& vis[i][j]==false) || (s[i][j]=='B' && vis[i][j]==true))
			{
				cout<<"NO"<<endl;
				return;
			}
		}
	}
	cout<<"YES"<<endl;
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
 
