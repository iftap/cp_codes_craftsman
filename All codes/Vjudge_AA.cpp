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
vll v;

void up(ll x){
    ll temp=0,gg=v[x];
    while(gg){
        temp+= gg%10;
        gg/=10;
    }
    v[x]=temp;

}

void ottarmarebap() {
    ll n,k; cin >> n >> k;
    v.resize(n,0);
    vector <pair<ll,ll>>p;
    fl(0,n) cin >> v[i];
    vll fq(n,0);
    while(k--){
        ll a,b,c;cin>>a;
        if(a==2){
            cin >>b;
            if(fq[b-1]>0){
                ll gm=3;
                gm=min(gm,fq[b-1]);
                fq[b-1]=0;
                while(gm--)up(b-1);
            }
            
                
            cout<<v[b-1]<<endl;
            continue;
        }
        cin>> b>> c;
        p.pb({b,c});
        
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    ll t = 1; 
    cin >> t;
    while (t--) {
        ottarmarebap();
    }
    return 0;
}