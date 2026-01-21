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
 //vll v,vt;
/*
n ps tm


v=1
t+ |x-x0| min , how ??
t> max t or les ,,, time er khela bradar time ta min 
time ber kore then pos

00000111

*/

void ottarmarebap(){
    ll a,b,sa=1,sb=0,x;cin  >> a >> b ;
    //cout << (sa<<32)<< endl;
    if(a==b){
        cout << 0 << endl ;return;
    }
    fl(0,32){
        if((1<<i)&a)sa=i;
        if((1<<i)&b)sb=i;
    }
    if(sa<sb){
        cout <<-1<< endl;return;
    }
    //cout << "tnh" << endl;
    if((a^b)<a){
        cout << 1 << endl;
        cout << (a^b)<< endl;
    }
    else {
        cout << 2 << endl;
        ll emp =((1<<sa)-1)^a;
        cout << (emp^a)<< " " << (b^(emp))<< endl;
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


