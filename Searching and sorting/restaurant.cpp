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
#define p pair<ll,ll>

int merge(int i,v<p> arr){
    if(i==arr.size()){
        return 0;
    }
    if(arr[i].first<=arr[i+1].first){
        if(arr[i+1].first<=arr[i].second){
            return 1;
        }
    }
    return 0;
}
int comp(p a,p b){
    return a.first<b.first;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
        ll n;
        cin>>n;
        if(n==1){
            cout<<"1"<<endl;
            return 0;
        }
        v<p> arr(2*n);
        int a,b;
        rp(i,0,2*n){
            cin>>a>>b;
            arr[i].first=a;
            arr[i].second=1;
            i++;
            arr[i].first=b;
            arr[i].second=-1;
        }
        sort(arr.begin(),arr.end(),comp);
        ll mx =INT_MIN;
        ll curr=0;
        rp(i,0,2*n){
            curr+=(arr[i].second);
            mx=max(curr,mx);
        }
        cout<<mx<<endl;
        
    

    return 0;
}
