#include <bits/stdc++.h> 
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

void siuu(){
    ll n;
    cin >> n;
    vector<string> ss(n);  
    fl(0,n)    cin >> ss[i];
    //sort(all(ss));  
    vector<string> fw,rv;
    string lf=ss[0],rg=ss[0];
    rv.pb(ss[0]);
    fl(1,n){
        bool gg =0;
        string gr =lf;
        
        string ss1= lf+ss[i];
        string ss2 =ss[i]+lf;
        if(ss1>ss2){
            rv.pb(ss[i]);
            lf= ss[i];
        } 
        else {
            fw.pb(ss[i]);
            rg= ss[i];
        }  
    }
    reverse(all(rv));
    fl(0,rv.sz)cout << rv[i];
    fl(0,fw.sz)cout << fw[i];
    cout << endl;

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

