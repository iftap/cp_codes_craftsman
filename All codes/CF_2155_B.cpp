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

 //ll n ,k ,a,b; 
 //vll v;


 /// et ahocche first e maximum distance ber kora then oitar basis e min ,,heheb0iiii
// maxiii..    111111100000000  karon divide it by k cnt><k
void ottarmarebap(){
    ll n , k ; cin >> n >> k ;
    vector<vector<char>> v(n, vector<char>(n, 'D'));
    if(k== (n*n)-1|| k>n*n){cn;return;}
    ll temp = n*n -k;
    cy;
    if(temp){
    v[0][0]= 'R';
    v[0][1]='L';

    temp-=2;
    }
    fl(0,n){
        if(temp==0)break;
        for(ll j =0;j<n;j++){
            if(temp==0)break;
            if(i==0){
                if(j<2)continue;
                else{
                    if(temp){v[i][j]= 'L';temp--;}
                }
            }
            else{
                if(temp){v[i][j]= 'U';temp--;}
            }
            
        }
        
    }
fl(0,n){
    for( ll j =0; j<n ; j++) cout << v[i][j];

    cout << endl;
}
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    ll t=1; 
    cin >> t;
    while (t--) {
        ottarmarebap();
    }

    return 0;
}


