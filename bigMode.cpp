#include<bits/stdc++.h>
#define ll long long
using namespace std;
ll big(ll a,ll b,ll c)
{
    ll ans = 1;
    a%=c;
    while(b>0){
        if(b&1)
            ans = ans*a%c;
        a = a*a%c;
        b>>=1;
    }
    return ans;
}
void solve()
{
    ll a,b,c,ans;
    cin>>a>>b>>c;
    ans = big(a,b,c);
    cout<<ans<<endl;
}
int main()
{
    int t=1;
    ll a,b,c,ans;
    cin>>a>>b>>c;
    ans = big(a,b,c);
    cout<<ans<<endl;
    while(a>1){
        a--;
        solve();
    }
    return 0;
}
