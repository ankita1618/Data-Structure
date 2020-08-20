#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
    ll n,m,y,t,server;
    cin>>n>>m;
    typedef pair<ll, ll> p;
    priority_queue <p ,vector<p >,greater<p> > q;
    ll arr[m];
    for(ll i=0;i<m;i++)
    {
        cin>>arr[i];
    }

    for(ll i=0;i<min(n,m);i++)
    {
        cout<<i<<" "<<0<<endl;
        q.push(make_pair(arr[i],i));
    }
    for(ll i=n;i<m;i++)
    {
        pair<ll,ll> x=q.top();
        t=x.first;
        server = x.second;
        cout<<server <<" "<<t<<endl;
        q.pop();
        q.push(make_pair(arr[i]+t,server));

    }

}

