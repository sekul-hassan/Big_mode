#include<bits/stdc++.h>
using namespace std;
#define ll unsigned long long
ll exp(ll a,ll b,ll m)
{
    a%=m;
    ll res = 1;
    while(b>0){
        if(b&1)
            res = res*a%m;
        a = a*a%m;
        b>>=1;
    }
    return res;
}
void solve()
{
    ll a,b,ans,c;
    cin>>a>>b>>c;
    ans = exp(a,b,c);
    cout<<ans<<endl;
}
int main()
{
    int t = 1;
    cin>>t;
    while(t--){
        solve();
    }
    char c;
    cin>>c;
    return 0;
}
