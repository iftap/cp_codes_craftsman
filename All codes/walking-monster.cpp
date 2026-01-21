#include <bits/stdc++.h>
using namespace std;
#define MAXN 400001
 
void solve() {
    int k;
    cin >>k;
    while(k--){
         int a,b,c,d;
		cin>>a>>b>>c>>d;
		if(b<=d&&c<=a+d-b) {
			cout<<(d-b)+(a+d-b-c)<<"\n";
		} else {
			cout<<"-1\n";
		}


    }
    
}
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
 
   // long long t; 
   // cin >> t;
   // while (t--) {
        solve();
   // }
 
    return 0;
}