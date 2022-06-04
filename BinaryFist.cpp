#include<iostream>
using namespace std;
#define ll long long
ll Bin(ll a,ll b)
{
    ll res = 1;
    while(b>0){
        if(b&1)
            res = res*a;
        a = a*a;
        b>>=1;
    }
    return res;
}
int main()
{
    ll t;
    t = 1;
    while(t){
        ll a,b;
        cout<<"Enter the value of Base : ";
        cin>>a;
        cout<<"Enter the value of Power : ";
        cin>>b;
        cout<<Bin(a,b)<<endl;
    }
    return 0;
}
