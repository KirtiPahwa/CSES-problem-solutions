#include <iostream>
#include<climits>
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
    
        ll n;
        cin>>n;
        ll arr[n];
        rp(i,0,n){
            cin>>arr[i];
        }
        ll mx=INT_MIN;
        ll currSum=0;
        rp(i,0,n){
            currSum+=arr[i];
            mx=max(mx,currSum);
            if(currSum<0){
                currSum=0;
            }
        }
        cout<<mx<<endl;

    return 0;

}
