#include<bits/stdc++.h>
using namespace std;

long long heightTree( vector <vector <long long> > children, long long n, long long root)
{
    long long height=0;
    queue <int> q;
    q.push(root);
    while(true)
    {
        int level=q.size();
        if(q.size()==0)
            return height;
        else{
            height++;
            while(level--)
            {
                int x =q.front();
                q.pop();
                for(int i=0;i<children[x].size();i++)
                    q.push(children[x][i]);
            }
        }

    }
    return height;
}

int main() {
    long long n,x,root;
    cin>>n;
    vector <vector <long long> > children;
    children.resize(n);
    for(long long i=0;i<n;i++)
    {
        cin>>x;
        if(x==-1)
            {root = i;}
        else
            {
                children[x].push_back(i);}
    }

    cout<<heightTree(children,n, root);

}

