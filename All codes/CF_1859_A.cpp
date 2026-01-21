#include <bits/stdc++.h>
using namespace std;
#define ll long long

void solve() {
    int n; cin >> n;
    int arr[n];
    for(int i=0;i<n;i++) cin >> arr[i];
    sort(arr,arr+n);
    if(arr[0]==arr[n-1]) cout << "-1" << endl;
    else{
        int lb=0,lc=0;
        for(auto u:arr){
            if(u!=arr[0]) break;
            lb++;
        }
        lc= n-lb;
        cout << lb << " " << lc << endl;
        for(int i=0;i<n;i++){
            if(i==lb) cout << endl;
            cout << arr[i] << " ";
        }
        cout << endl;
    }
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
