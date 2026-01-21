#include <bits/stdc++.h>
using namespace std;
#define ll long long

void solve() {
    int n; cin >> n;
    int seg1,seg2,seg3,x,cn0=0;
    vector<int> v(n);
    for(int i=0;i<n;i++){
        cin >> v[i];
        if(v[i]==0) cn0++;
    }
    if(!cn0) cout << "1\n1 " << n << endl;
    else{
        if(v[0]==0 || v[1]==0){
            if(v[0]==0 && v[1]==0) cn0-=2;
            else cn0--;

            if(cn0){
                cout << "3\n3 " << n << endl;
                cout << "1 2\n1 2\n";
            }
            else{
                cout << "2\n1 2\n1 " << n-1 << endl;
            }

        }
        else{
            if(cn0){
                cout << "2\n3 " << n << endl;
                cout << "1 3 \n";
            }
            else cout << "1\n1 " << n << endl;
        }
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