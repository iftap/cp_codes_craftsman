#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
#define sz size()
ll n ;
vector<string> ansi;
void gg(string s, ll st, ll en){
    if(s.sz==2*n){ansi.pb(s);return;}
    if(st<n)gg(s+'(',st+1,en);
    if(en<st)gg(s+')',st,en+1);
}


void siuu(){
    cin >> n ;ansi.resize(0);
    string s="";
    gg(s,0,0);
    cout <<"[ ";
    for(string x:ansi)cout << x<<' ';
    cout<<" ]\n";
}
int main() {  
    ll t=1;  
    cin >> t;
    while (t--) {
        siuu();
    }
    return 0;
}
