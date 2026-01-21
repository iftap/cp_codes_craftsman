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
ll n=3; 
vector<vector<float>>a(n,vector<float>(n));
void gg(){

}

void siuu(){ 
    ll n ; cin >> n ;
    vector<vector<ll>>a(n,vector<ll>(n));
    fl(0,n){
        flj(0,n) cin >> a[i][j];
    }
    fl(0,n){
        flj(0,n){
            if(i>j){
                if(a[i][j]==0)continue;
                if(j==0){
                    float temp = a[i][j]/a[0][0];
                    for(ll k =0;k<n;k++){
                        a[i][k]-=temp*(1.0)*(a[i][k]);
                    }
                }
                else{
                    ll ind=0;
                    float ni=0;
                    for(ll k =0;k<n;k++){
                        if(a[i][k]!=0){
                            ni= a[i][j]/a[i][k];
                            ind =k;
                        }
                    }
                    for(ll k =0;k<n;k++){
                        a[k][j]-= ni*a[k][ind];
                    }
                }
            }
        }
    } 
    

    
    fl(0,n){
        flj(0,n) cout<< a[i][j] <<' ';
        cout << endl;
    } 

    

} 
 
int main() { 
    ios::sync_with_stdio(false); 
    cin.tie(nullptr); 
    
    ll t=1;  
    //cin >> t; 
    while (t--) { 
        siuu(); 
    } 
 
    return 0; 
}

/*

 fl(0,n){
        flj(0,n){
            if(i>j){
                if(a[i][j]<0.001)a[i][j]=0;
            }
        }
    }*/