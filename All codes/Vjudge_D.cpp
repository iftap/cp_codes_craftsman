#include <bits/stdc++.h> 
using namespace std; 
#define all(v) v.begin(), v.end() 
#define rall(v) v.rbegin(), v.rend() 
#define cy cout << "YES\n" 
#define cn cout << "NO\n" 
#define fl(s,e) for(int i=s;i<e;i++) 
#define flj(s,e) for(int j=s;j<e;j++) 
#define vll vector<ll> 
#include<numeric> 
#define sz size()
typedef long long       ll;
typedef long double     ld;
typedef vector<int>     vi;
typedef vector<vi>      vvi;
typedef vector<vll>     vvll;
typedef vector<bool>    vb;
typedef vector<vb>      vvb;
typedef pair<int, int>  pi;
typedef vector<pi>      vpi;
typedef pair<ll, ll>    pll;
typedef vector<pll>     vpll;
#define pb              push_back
#define ff              first
#define ss              second
#define flr(i, a, b)    for(ll i = (a); i >= (b); i--)
#define lcm(a, b)       ((a / __gcd(a, b)) * b)
 
const ll N=200005;
const ll mod=1000000007;
const ll INF=2e18L+5;
ll ans;
void func(vector<int>& aa) {
    if (aa.empty()) return;
    ll n = aa.size();
    ll last = 0;
    fl(0,n){
        if (aa[i] == aa[0]) {
            last = i;
        } else {
            break;
        }
    }
    --aa[last];
    for (int i = 0; i < n; ++i) --aa[i];
    ++ans;
    while (!aa.empty() && aa.back() <= 0) {
        aa.pop_back();
    }
    func(aa);
}
void siuu(){
    int n;
        cin >> n;
        vector<int> a(n);
        ans = 0;
        fl(1,n) {
            int x;
            cin >> x;
            ++a[--x];
        }
        a.push_back(1);
        sort(a.rbegin(), a.rend());
        while (!a.empty() && a.back() <= 0) a.pop_back();
        n = a.size();
        for (int i = 0; i < n; ++i) {
            a[i] = a[i] - (n - i);
            ++ans;
        }
        sort(a.rbegin(), a.rend());
        while (!a.empty() && a.back() <= 0) a.pop_back();
        func(a);
        cout << ans << endl;
}
    

 //1000000
int main() { 
    ios::sync_with_stdio(false); 
    cin.tie(nullptr); 
    //seive();
    ll t=1;  
    cin >> t; 
    while(t--){
        siuu();
    }
 
    return 0; 
}


/*


#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

#define pb      push_back
#define debug   cout<<"check"<<endl;cout.flush();
#define all(x)  (x).begin(),(x).end()
#define endl    '\n'

const ll N=200005;
const ll mod=1000000007;
const ll INF=2e18L+5;
int ans;
void func(vector<int>& a) {
    if (a.empty()) return;
    int n = a.size();
    int last = 0;
    for (int i = 0; i < n; ++i) {
        if (a[i] == a[0]) {
            last = i;
        } else {
            break;
        }
    }
    --a[last];
    for (int i = 0; i < n; ++i) --a[i];
    ++ans;
    while (!a.empty() && a.back() <= 0) {
        a.pop_back();
    }
    func(a);
}
void solve(){
        int n;
        cin >> n;
        vector<int> a(n);
        ans = 0;
        for (int i = 1; i < n; ++i) {
            int x;
            cin >> x;
            ++a[--x];
        }
        a.push_back(1);
        sort(a.rbegin(), a.rend());
        while (!a.empty() && a.back() <= 0) a.pop_back();
        n = a.size();
        for (int i = 0; i < n; ++i) {
            a[i] = a[i] - (n - i);
            ++ans;
        }
        sort(a.rbegin(), a.rend());
        while (!a.empty() && a.back() <= 0) a.pop_back();
        func(a);
        cout << ans << '\n';
}

int32_t main(){  
    
    ios::sync_with_stdio(false);cin.tie(nullptr);
    
    int t=1;
    cin>>t;
    for(int i=1;i<=t;i++){
        solve();
    }
    
    return 0;
}
}*/