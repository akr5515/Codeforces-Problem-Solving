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
	string s;
	cin>>s;
	cout<<1;
	if(s[0]=='0'){
		s[0]='1';
	}else{
		s[0]='2';
	}
	
	for(ll i=1;i<n;i++){
		if(s[i-1]=='1'){
			if(s[i]=='0'){
				cout<<0;
				s[i]='0';
			}else{
				cout<<1;
				s[i]='2';
			}
		}else if(s[i-1]=='2'){
			if(s[i]=='0'){
				cout<<1;
				s[i]='1';
			}else{
				cout<<0;
				s[i]='1';
			}
		}else if(s[i-1]=='0'){
			if(s[i]=='0'){
				cout<<1;
				s[i]='1';
			}else{
				cout<<1;
				s[i]='2';
			}
		}
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
 
