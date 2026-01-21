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
const int N= 5e5+1;

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
    ll n ; cin >> n;
    vll v(n);
   
    ll sm =0;
     fl(0,n){
        cin >> v[i];
        //sm+=v[i];
     }
     fl(1,n)sm+= abs(v[i]-v[i-1]);
     ll maxi = sm;
     fl(1,n-1){
        ll gg = abs(v[i]-v[i-1]);
        gg+= abs(v[i]-v[i+1]);
        maxi = min(maxi , sm-gg+abs(v[i-1]-v[i+1]));
     }
     if(n>1){
         maxi = min(maxi,sm-abs(v[n-1]-v[n-2]));
        maxi = min(maxi,sm-abs(v[1]-v[0]));
     }
     else{
        maxi=0;
     }
     cout << maxi << endl;

    
} 
 
int main() { 
    ios::sync_with_stdio(false); 
    cin.tie(nullptr); 
    
    ll t=1;  
    cin >> t; 
    while (t--) { 
        siuu(); 
    } 
 
    return 0; 
}

