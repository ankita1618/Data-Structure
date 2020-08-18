#include<bits/stdc++.h>
using namespace std;
int main() {

    long long s,n,x,y;
    vector <pair <long long, long long > > v;
    cin>>s>>n;
    for(long long i=0;i<n;i++)
    {
        cin>>x>>y;
        v.push_back(make_pair(x,y));
    }
    vector <long long> start(n,0);

    deque <long long> q;

    for(long long i=0;i<n;i++)
    {
        while(!q.empty()&&q.front()<=v[i].first)
            {
                q.pop_front();
            }
        if(q.empty()&&s>0)
            {start[i]=v[i].first;
            q.push_back(v[i].first+v[i].second);
            v[i].second=v[i].second+v[i].first;
            }
        else if(q.size()<s)
        {
            start[i]=max(v[i].first,q.back());
            q.push_back(start[i]+v[i].second);
            v[i].second=(start[i]+v[i].second);

        }
        else {
            start[i]=-1;
        }

    }
    for(long long i=0;i<n;i++)
        cout<<start[i]<<endl;
    return 0;
}

