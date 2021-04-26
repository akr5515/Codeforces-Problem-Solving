#include<bits/stdc++.h>
const int M=1e9+7;//M=300000;//
const int N=1e5+5;
#define pb push_back
#define mp make_pair
#define rep(i,n) for(int i=0;i<n;i++)
typedef long long int ll;
using namespace std;
 
ll sum(0),k,n,m,x,y,z,t,i,j,ans(0),temp,mn(M),mx(-9e9);
 
void solve()
{
	ll d;
	cin>>n>>d;
	bool flag=true;
	ll total(0),churu(0);
	for(ll i=0;i<n;i++){
		if(i!=0){
			total+=10;
			churu+=10;
		}
		cin>>x;
		total+=x;
		if(total>d){
			flag=false;
		}
	}
	if(flag==false){
		cout<<-1;
		return;
	}
	churu/=5;
	churu+=(d-total)/5;
	cout<<churu;
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
 
 
