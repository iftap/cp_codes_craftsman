#include <bits/stdc++.h>
using namespace std;
#define ll long long

void solve() {
    ll n; cin >> n;
    map<ll,ll> fq1,fq2;
    set<ll> el;
    ll temp=1;
    vector<ll> a(n),b(n);
    for(int i=0;i<n;i++){
        cin >> a[i];
        el.insert(a[i]);
        if(i==0) fq1[a[0]]=1;
        if(i==0) continue;
        if(a[i]==a[i-1]) temp++;
        else{
            
            temp =1;
        }
        fq1[a[i]] = max(fq1[a[i]],temp);


        
    }
    temp =1;
    for(int i=0;i<n;i++){
        cin >> b[i];
        el.insert(b[i]);
        if(i==0) fq2[b[0]]=1;
        if(i==0) continue;
        if(b[i]==b[i-1]) temp++;
        else{
            
            temp =1;
        }
        fq2[b[i]] = max(fq2[b[i]],temp);
    }
    ll ans =1;
    for(auto e: el){
        ans= max(ans,fq1[e]+fq2[e]);
    }
    cout << ans << endl;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    ll t; 
    cin >> t;
    while (t--) {
        solve();
    }

    return 0;
}
