#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define rp(i,s,e) for (ll i = s; i < e; i++)
#define tc    \
    ll t;    \
    cin >> t; \
    while (t--)
#define mod 1e9 + 7
#define v vector
#define f first
#define s second
#define p pair<ll,ll>

bool comp(p a,p b){
    return a.first<b.first;
}


int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
        ll n,x;
        cin>>n>>x;
        v<p> arr(n);
        rp(i,0,n){
            cin>>arr[i].first;
            arr[i].second=i+1;
        }
        // if(n==1){
        //     cout<<"IMPOSSIBLE"<<endl;
        //     return 0;
        // }
        sort(arr.begin(),arr.end(),comp);
        int i=0,j=n-1;
        while(i<j){
            int a=arr[i].first+arr[j].first;
            if(a==x){
                int mn=min(arr[i].second,arr[j].second);
                int mx=max(arr[i].second,arr[j].second);
                cout<<mn<<" "<<mx<<endl;
                return 0;
            }else if(a<x){
                i++;
            }else{
                j--;
            }
        }
        cout<<"IMPOSSIBLE"<<endl;
        
    

    return 0;
}
