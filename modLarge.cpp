#include<iostream>
using namespace std;
#define ll long long
ll FindMode(int a,int b,int m)
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
int main()
{
    /// calculate a^b%m --
    int t = 1;
    while(t){
     int a,b,m;
    cout<<"Enter the value of Base : ";
    cin>>a;
    cout<<"Enter the value of Power : ";
    cin>>b;
    cout<<"Enter the mod value : ";
    cin>>m;
    cout<<FindMode(a,b,m)<<endl;
    }
}
