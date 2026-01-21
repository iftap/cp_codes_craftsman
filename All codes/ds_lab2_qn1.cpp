#include <bits/stdc++.h> 
using namespace std; 
#define ll long long 
#define all(v) v.begin(), v.end() 

void siuu(){ 
    string s1, s2; cin >> s1 >> s2;
    sort(all(s1));
    sort(all(s2));
    if(s1==s2)cout << "YES\n";
    else cout << "NO\n";
} 
 
int main() {
    ll t=1;  
    cin >> t; 
    while (t--) { 
        siuu(); 
    } 
    return 0; 
}
