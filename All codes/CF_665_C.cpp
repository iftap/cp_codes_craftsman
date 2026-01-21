#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
#define all(v) v.begin(), v.end()
#define rall(v) v.rbegin(), v.rend()
#define cy cout << "YES\n"
#define cn cout << "NO\n"
#define fl(s,e) for(int i=s;i<e;i++)
#define vll vector<ll>
#include<numeric>
#define sz size()

void ottarmarebap(){
    string s; cin >> s;
    s+='0';
    fl(1,s.sz){
        if(s[i]==s[i-1]){
            
                for (char c='a';c<='z';++c){
                    if(c!=s[i+1] && c!=s[i]){
                        s[i]=c;
                        break;
                    }
                }
                i++;
            
            
        }
    }
    
    fl(0,s.sz-1)cout<<s[i];
    cout << endl;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    ll t=1; 
    //cin >> t;
    while (t--) {
        ottarmarebap();
    }

    return 0;
}

