#include <bits/stdc++.h>
using namespace std;

#define ll long long

vector<vector<ll>> v, cr;
vector<ll> vis;

ll minX, maxX, minY, maxY;

void bfs(ll start){
    queue<ll> q;
    q.push(start);
    vis[start] = 1;

    while(!q.empty()){
        ll a = q.front();
        q.pop();

        minX = min(minX, cr[a][0]);
        maxX = max(maxX, cr[a][0]);
        minY = min(minY, cr[a][1]);
        maxY = max(maxY, cr[a][1]);

        for(auto x: v[a]){
            if(!vis[x]){
                vis[x] = 1;
                q.push(x);
            }
        }
    }
}

void siuu(){
    ll n, m;
    cin >> n >> m;

    v.assign(n+1, vector<ll>());
    cr.assign(n+1, vector<ll>());
    vis.assign(n+1, 0);

    for(int i = 1; i <= n; i++){
        ll a, b;
        cin >> a >> b;
        cr[i].push_back(a);
        cr[i].push_back(b);
    }

    for(int i = 0; i < m; i++){
        ll a, b;
        cin >> a >> b;
        v[a].push_back(b);
        v[b].push_back(a);
    }

    ll ans = LLONG_MAX;

    for(int i = 1; i <= n; i++){
        if(!vis[i]){

            minX = minY = LLONG_MAX;
            maxX = maxY = LLONG_MIN;

            bfs(i);

            ll perimeter = 2 * ((maxX - minX) + (maxY - minY));
            ans = min(ans, perimeter);
        }
    }

    cout << ans << endl;
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    siuu();

    return 0;
}
