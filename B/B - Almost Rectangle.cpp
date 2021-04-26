#include<bits/stdc++.h>
const int M=1e9+7;//M=300000;//
const int N=1e5+6;
#define pb push_back
#define mp make_pair
#define rep(i,n) for(int i=0;i<n;i++)
typedef long long int ll;
using namespace std;
 
ll t,x,mn(M),mx(-9e9);
 
void solve()
{
	ll n;
	cin>>n;
	string s[n];
	ll x1,y1,x2,y2,cnt=0;
	for(ll i=0;i<n;i++){
		cin>>s[i];
		for(ll j=0;j<n && cnt<2;j++){
			if(s[i][j]=='*' && cnt==0){
				x1=i;
				y1=j;
				cnt++;
				continue;
			}
			
			if(s[i][j]=='*' && cnt==1){
				x2=i;
				y2=j;
				cnt++;
				break;
			}
		}
	}
	
	ll x3=x1,y3=y2,x4=x2,y4=y1;
	//cout<<x1<<" "<<y1<<" "<<x2<<" "<<y2<<endl;
 
	if(x1==x2){
		x3=(x1+1)%(n);
		x4=(x1+1)%(n);
	}else if(y1==y2){
		y3=(y1+1)%(n);
		y4=(y1+1)%(n);
	}
	//cout<<x3<<" "<<y3<<" "<<x4<<" "<<y4<<endl;
 
	
	for(ll i=0;i<n;i++){
		for(ll j=0;j<n;j++){
			if(s[i][j]=='.' && ((x3==i && y3==j)|| (x4==i && y4==j))){
				cout<<'*';
			}else{
				cout<<s[i][j];
			}
		}
		cout<<endl;
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
 
