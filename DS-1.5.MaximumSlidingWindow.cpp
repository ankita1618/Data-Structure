#include<bits/stdc++.h>
using namespace std;

int main() {
    int n,m;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
        cin>>arr[i];
    cin>>m;
    deque <int> q(m);
    for(int i=0;i<m;i++)
    {
        if(q.empty())
            q.push_front(i);
        else
        {
            while(!q.empty()&&arr[q.back()]<=arr[i])
                q.pop_back();
            q.push_back(i);
        }

    }
    cout<<arr[q.front()]<<" ";
    for(int i=m;i<n;i++)
    {
        while(!q.empty()&&i-q.front()>=m)
            q.pop_front();
        while(!q.empty()&&arr[q.back()]<=arr[i])
                q.pop_back();
        q.push_back(i);

        cout<<arr[q.front()]<<" ";
    }
    return 0;
}
