#include <bits/stdc++.h>
using namespace std;
#define ll long long

void solve() {
    int n ; cin >> n;
    int c0 =3,c1=1,x,c3=1,c2=2,c5=1;
    vector<int> v;
    while(n--){
        cin >> x;
        v.push_back(x);
    }
    int cnt=0;
    for(auto u: v){
        if(u==0 && c0>0) c0--;
        if(u==1 && c1>0) c1--;
        if(u==2 && c2>0) c2--;
        if(u==3 && c3>0) c3--;
        if(u==5 && c5>0) c5--;
        if(c0|c1|c2|c3|c5) cnt++;
        else break;
    }
    if(c0|c1|c2|c3|c5) cout << "0" << endl;
    else cout << cnt+1 << endl;

}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t; cin >> t;
    while(t--){
    solve();
    }
    return 0;
}
