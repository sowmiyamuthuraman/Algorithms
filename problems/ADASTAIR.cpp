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
int main()
{
    	fastread;
        ll t;
        cin>>t;
        while(t--)
        {
        	ll n,k;
        	cin>>n>>k;
        	ll steps=0;
        	ll a[n+1]={0};
        	for(ll i=1;i<=n;i++)
        	{
        		cin>>a[i];
        		if((a[i]-a[i-1])>k)
        		{
        			steps+=((abs(a[i]-a[i-1])/k));
        			if(abs(a[i]-a[i-1])%k==0)steps--;
        		}
        	}
        	cout<<steps;
            cout<<"\n";
        }
}
