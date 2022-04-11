#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define rp(i, s, e) for (int i = s; i < e; i++)
#define tc    \
    int t;    \
    cin >> t; \
    while (t--)
#define mod 1e9 + 7

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    int n,x;
    cin>>n>>x;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    sort(arr,arr+n);
    int count=0;
    int i=0, j=n-1;
    
    while(i<j){
        if(arr[i]+arr[j]<=x){
            count++;
            i++;
            j--;
        }else{
            if(arr[j]<=x){
                count++;
            }
            j--;
        }
    }
    if(i==j){
        count++;
    }
    cout<<count<<endl;

    return 0;
}
