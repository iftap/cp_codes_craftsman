#include <bits/stdc++.h> 
#include <bitset>

using namespace std; 
#define ll long long 
#define pb push_back 
#define all(v) v.begin(), v.end() 
#define rall(v) v.rbegin(), v.rend() 
#define cy cout << "YES\n" 
#define cn cout << "NO\n" 
#define fl(s,e) for(int i=s;i<e;i++) 
#define flj(s,e) for(int j=s;j<e;j++) 
#define vll vector<ll> 
#include<numeric> 
#define sz size()

class Trie{
    public:
    Trie *child[2];

    Trie(){
        this->child[0]=NULL;
        this->child[1]=NULL;
    }
};
class soln{
    Trie *ne;
    void insert(int n){
        Trie *t = ne;
        bitset<32> bs(n);

        for(int j = 31;j>=0;j--){
            if(!t->child[bs[j]])t->child[bs[j]]= new Trie();// jodi 0 ba one er node n athake tahole banacchi
            t= t->child[bs[j]];// pointer move kortesi 
        }
    }
    public:
    int findx(vector<int>&nums){
        ne = new Trie();
       for(auto &nm:nums) insert(nm); //sobgula element insert 
       int ansi =0;
       for(auto &nm:nums) ansi= max(ansi,maxi(nm));
       return ansi ;

    }

    int maxi(int n ){
        Trie *t = ne;
        bitset<32> bs(n);
        int ansi =0;
        for(int j = 31;j>=0;j--){
            if(t->child[!bs[j]]) ansi+=(1<<j),t= t->child[!bs[j]];
            // pointer ta k opposite e push kora 
            // bitset e amar value ta achei 
            else t = t->child[bs[j]];
        }
        return ansi;
    }
};




void siuu(){
    ll n ; cin >>n ;
    map<ll,ll> mp;
    ll gg = (1LL<<n)-1;
    for(ll i=n;i>0;i--){
        ll ss=(1<<i)-1;
        cout << ss<<' ';
        mp[ss]++;
        if(i==1)continue;
        flj(1,1<<(n-i-1)){
            ll gm=0;
            for(ll k =0;k<16;k++){
                if(j&(1<<k))gm+=(1<<(i+1+k));
            }
            cout << ss+gm<<' ';
            mp[ss+gm]++;
        }
        
    }
    for(ll i =3;i<(1LL<<n)-1;i+=2){
        if(mp[i]==0)cout << i << ' ';
    }
    cout <<'0'<<' ';
    for(ll i =2;i<=(1LL<<n)-2;i+=2){
        cout << i <<' ';

    }
    
    cout << endl;
    
} 
 
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

