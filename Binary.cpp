#include<iostream>
using namespace std;
#define ll long long
ll binpow(ll a,ll b)
{
    if(b==0)
        return 1;
    ll res = binpow(a,b/2);
    if(b&1)
        return res*res*a;
    else
        return res*res;
}
int main()
{
    ll a,b;
    while(1){
        cout<<"Enter the base value : ";
        cin>>a;
        cout<<"Enter the power value : ";
        cin>>b;
        ll ans = binpow(a,b);
        cout<<ans<<endl;
    }
}
