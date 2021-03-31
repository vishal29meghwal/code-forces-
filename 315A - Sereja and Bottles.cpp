#include <bits/stdc++.h>
#include <iostream>
#define ll long long 
using namespace std;

int main()
{
    ll n , c = 0;
    cin>>n;
    ll a[n][2];
    map<int,int> m;
    for(ll i = 0 ; i < n ; i++){
        cin>>a[i][0]>>a[i][1];
        m[a[i][0]]=0;
    }
    for(ll i=0 ; i<n ; i++){
        if(a[i][0]!=a[i][1])m[a[i][1]]++;
    }
    for(ll i=0 ; i<n ; i++){
        if(m[a[i][0]] == 0)c++;
    }
    cout<<c<<endl;
    
    return 0;
}
