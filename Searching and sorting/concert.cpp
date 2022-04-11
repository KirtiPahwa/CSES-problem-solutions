#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define rp(i, s, e) for (ll i = s; i < e; i++)
#define tc    \
    ll t;    \
    cin >> t; \
    while (t--)
#define mod 1e9 + 7

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    int n,m;
    cin>>n>>m;
  multiset<int> c; 
     for(int i=0;i<n;i++){
        int a;
        cin>>a;
        c.insert(a);
    }

    ll t[m];

    rp(i,0,m){
        ll a;
        cin>>a;
        t[i]=a;
    }
    multiset<int>::iterator it;
    rp(i,0,m){
            it=c.upper_bound(t[i]);
        if(it==c.begin()){
            cout<<"-1"<<endl;
        }else{
        cout<<*(--it)<<endl;
        c.erase(it);
        }
    }
    



    

    


    return 0;
}
