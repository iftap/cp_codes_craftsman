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
vll v1,v2;
ll n,m ;
static const int N = 5e5+5;
vll pr_div;
ll M=20000000;
vector<bool> isprm(M+9,1);
void seive(){
    isprm[0] = isprm[1] = 0;
    for(ll i =2;i*i<M;i++){
        if(isprm[i]){
            for(ll j = i*i;j<=M;j+=i){
                isprm[j]=0;
            }
        }
    }
    fl(2,M){
        if(isprm[i])pr_div.pb(i);
    }
}




void siuu(){
    string a,s;cin >> a >> s;
    vll aa(27,0),ss(27,0);
    fl(0,s.sz){
        ss[s[i]-'a']++;
    }
    fl(0,a.sz){
        aa[a[i]-'a']++;
    }
    fl(0,27){
        if(ss[i]<a[i]){
            cout << "Impossible\n";return;
        }
    }
    string ansi="";
    ll gg= 0,ch=0;
    char cc= 'a-1';
    fl(0,a.sz){
        if(s[i]>cc)
        {
            cc=s[i];
            flj(0,cc-'a'){
                if(aa[j]>ss[j]){
                    for(ll k =0;k<aa[j];k++){
                        cout << tochar('a'+j);
                    }
                    aa[j]=ss[j];
                }

            }
            cout << cc;
            aa[cc-'a']--;
            ss[cc-'a']--;

        }
        else{
            cout << s[i];
            aa[s[i]-'a']--;
            ss[s[i]-'a']--;
        }
    }
    




}
 //1000000
int main() { 
    ios::sync_with_stdio(false); 
    cin.tie(nullptr); 
    //seive();
    ll t=1;  
    cin >> t; 
    while (t--) { 
        siuu(); 
    } 
 
    return 0; 
}
