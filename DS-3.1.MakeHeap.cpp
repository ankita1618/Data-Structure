#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int c;
vector < pair <int , int > > v;
void heapify(int arr[], int n, int i)
{
    int smallest = i,l,r;
    l=2*i+1;
    r=2*i+2;
    if(l<n&&arr[l]<arr[smallest])
        smallest =l;
    if(r<n&&arr[r]<arr[smallest])
        smallest=r;
    if(smallest!=i&&smallest<n)
    {
        v.push_back(make_pair(i,smallest));
        swap(arr[smallest], arr[i]);
        heapify(arr,n,smallest);
        c++;
    }

}

void heapsort(int arr[], int n)
{
    for(int i=n/2-1;i>=0;i--)
        heapify(arr,n,i);

        cout<<c<<endl;
        for(int i=0;i<c;i++)
            cout<<v[i].first<<" "<<v[i].second<<endl;


}

int main()
{
    int n;
    c=0;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
        cin>>arr[i];

    heapsort(arr,n);
}

