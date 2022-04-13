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

int comp(p a,p b){
    return a.second<b.second;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
        ll n;
        cin>>n;
        
        v<p> arr(n);
        int a,b;
        rp(i,0,n){
            cin>>a>>b;
            arr[i].first=a;
            arr[i].second=b;
            
        }
        sort(arr.begin(),arr.end(),comp);
        int i=0,j=0,count=1;
        while(j<n){
            if(arr[j].first>=arr[i].second){
                count++;
                i=j;
            }else{
                j++;
            }
        }
        cout<<count<<endl;
        
    

    return 0;
}
