#include <iostream>
#include<climits>
#include<algorithm>
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


int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int n;
    cin>>n;
    ll arr[n];
    rp(i,0,n){
        cin>>arr[i];
    }
    ll ans=0;
    sort(arr,arr+n);
    ll mid=n/2; 
    rp(i,0,n){
        ans+=abs(arr[i]-arr[mid]);
    }
    cout<<ans<<endl;
    
        

    return 0;

}
