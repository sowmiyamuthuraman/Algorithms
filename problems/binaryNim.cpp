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
        	ll n;
        	string player;
        	cin>>n>>player;
			string stack[n];
			ll one=0,zero=0;
			for(ll i=0;i<n;i++)
			{
				cin>>stack[i];
				for(ll j=1;stack[i][j];j++)
				{
					if(stack[i][j]=='1'&&stack[i][j-1]=='0')
						one++;
					else if(stack[i][j]=='0'&&stack[i][j-1]=='1')
						zero++;
				}
				if(stack[i][0]=='1')one++;
				else zero++;
			}
				if(player[1]=='e')
				{
					if(one==zero)
					{
						cout<<"Dee";
					}
					else if(one<zero)
					{
						cout<<"Dum";
					}
					else
					{
						cout<<"Dee";
					}
				}
				else
				{
					if(one==zero)
					{
						cout<<"Dum";
					}
					else if(one<zero)
					{
						cout<<"Dum";
					}
					else
					{
						cout<<"Dee";
					}
				}
            cout<<"\n";
        }
}
