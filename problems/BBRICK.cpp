#include <bits/stdc++.h>
#define vi vector<ll>
#define pp pair<ll,ll>
#define mp make_pair
#define pb push_back
#define For(i,a,b) for(i=a;i<b;i++)
#define Frev(i,a,b) for(i=a;i>=b;i--)
#define sll(n) scanf("%lld", &n)
#define si(n) scanf("%d", &n)
#define INF 1e18
#define MOD 1000000007
#define gc getchar
#define pc putchar
#define ll long long
#define ull unsigned long long
#define ss(n) scanf("%s", n)
#define fastread std::ios::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
using namespace std;
map<pair<ll, ll>, ll> Map; 
map<string,ll>::iterator it;
ll fun(ll n,ll k)
{
	ll ans=0;
	ans=Map[{n,k}];
	if(ans!=0)
		return ans;
	else
	{
    if(n<k)
    {
    	return 0;
    }
    else if(n==k)
    {
        return 2;
    }
    else if(k==1)
    {
		return ((2*n)%MOD);
    }
    else 
    {
        ans= ((fun(n-1,k)%MOD+fun(n-1,k-1)%MOD+fun(n-2,k-1)%MOD)%MOD);
        Map[{n,k}]=ans;
        return ans;
    }
	}
}
int main()
{
    fastread;
        ll t;
        cin>>t;
        while(t--)
        {
            ll n,k;
            cin>>n>>k;
            cout<<fun(n,k)%MOD<<"\n";
        }
}
