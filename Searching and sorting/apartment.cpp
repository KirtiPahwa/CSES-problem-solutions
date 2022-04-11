#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,m,k;
    cin>>n>>m>>k;
    int p[n];
    int a[m];
    for(int i=0;i<n;i++){
        cin>>p[i];
    }
    for(int i=0;i<m;i++){
        cin>>a[i];
    }
    sort(p,p+n);
    sort(a,a+m);
    int i=0,j=0,count=0;
    while(i<n && j<m){
        if(abs(p[i]-a[j])<=k || p[i]==a[j]){
            count++;
            i++;
            j++;
        }else if(a[j]<p[i]){
            j++;
        }else{
            i++;
        }
    }
    cout<<count<<endl;

    return 0;
}