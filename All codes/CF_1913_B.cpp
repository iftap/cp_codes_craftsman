#include <bits/stdc++.h>
using namespace std;
#define ll long long

void solve() {
    
    string s; cin >> s;
    ll ss = s.size(),temp=0,c0=0,c1=0;
    for(auto u :s){
        if(u=='1') c1++;
        else c0++;
    }
    for(auto u :s){
        if(u=='1'){
            if(c0<=0) break;
            c0--;
            temp++; 
        }
        else{
            if(c1<=0) break;
            c1--;
            temp++; 
        }
    }

    cout << ss-temp << endl;
    
    

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
