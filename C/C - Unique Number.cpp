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
	cin>>x;
	string s="";
	if(x>45){
		cout<<-1<<endl;
		return;
	}
	for( ll i=9;i>=1;i--){
		if(x<=9 && x<=i){
			s+=(x+'0');
			x=0;
			break;
		}else{
			x-=i;
			s+=(i+'0');
		}
	}
	if(x){
		cout<<-1<<endl;
		return;
	}
	reverse(s.begin(),s.end());
	cout<<s<<endl;
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
 
