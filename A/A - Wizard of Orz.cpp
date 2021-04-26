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
	x=9;
	if(n>=3){
		cout<<989;
		x=0;
		n-=3;
	}else if(n==2){
		cout<<98<<endl;
		return;
	}else if(n==1){
		cout<<9<<endl;
		return;
	}
	
	while(n--){
		cout<<x;
		x++;
		x%=10;
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
 
