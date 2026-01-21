#include <bits/stdc++.h>
using namespace std;
#define ll long long

#include <iostream>
using namespace std;

string bini(ll num) {
    string res;
    while (num > 0) {
        res = char('0' + (num % 2)) + res;
        num /= 2;
    }
    return res.empty() ? "0" : res;
}



void solve() {
    ll n; cin >> n;
    vector<ll>v(n);
    v[0]=1;
    char x;
    ll mini =1,maxi=1;
    for(ll i=1;i<n;i++){
        cin  >> x;
        if(x=='<'){
            v[i]= mini-1;
            mini--;
        }
        else{
            v[i]=maxi+1;
            maxi++;
        }
    }
    ll temp =0;
    if(mini<1) temp = 1+abs(mini);
    for(auto u:v) cout << u+temp << " ";
    cout << endl;

    
    

        
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