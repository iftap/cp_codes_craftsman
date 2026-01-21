#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
#define all(v) v.begin(), v.end()
#define cy cout << "YES\n"
#define cn cout << "NO\n"
#define fl(s,e) for(int i=s;i<e;i++)


struct ply{
    string nm;
    int matc[3];
    int ttl;
};
bool cmp(const ply &a, const ply &b){
    return a.ttl > b.ttl;
}

void ip(vector<ply> &pl,string typ){
    cout << "\nEnter number of "<< typ << endl;
    ll n; cin >> n;
    ply pp;
    fl(0,n){
        
        cout << "Enter Name : ";
        cin >> pp.nm;
        pp.ttl=0;
        cout << "Performance of last 3 matches : ";
        for(ll j=0;j<3;j++){
            cin >> pp.matc[j];
            pp.ttl+=pp.matc[j];
        }
        pl.pb(pp);
    }
}
void printo(vector<ply> &pl,string typ){
    cout << "Rank | Name      | Match 1 | Match 2 | Match 3 | Total ";
    cout << typ << endl;
    fl(0,pl.size()){
        cout << i+1 <<"   "<< pl[i].nm << "    "<<pl[i].matc[0];
        cout << "    " << pl[i].matc[1];
        cout << "    " << pl[i].matc[2] << "    "<<  pl[i].ttl << endl;


    }
}




int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    vector<ply> gk,fw,ref;
    cout << "Input of foward \n";
    ip(fw,"Foward");
   // sort(all(fw),cmpgl);
    cout << "Input of Goalkeeper \n";
    ip(gk,"Goalkeeper");
    //sort(all(gk),cmpgl);
    cout << "Input of Referee \n";
    ip(ref,"Referee");
    sort(all(fw),cmp);
    sort(all(gk),cmp);
    sort(all(ref),cmp);  
    

    cout << "\n=======================\nForward Rankings:\n";
    printo(fw,"Foward");
    cout << "\n=======================\ngoalkeeper Rankings:\n";
    printo(gk,"Goalkeeper");
    cout << "\n=======================\nReferee Rankings:\n";
    printo(ref,"Referee");

    

    return 0;
}