#include <bits/stdc++.h>
using namespace std;
#define ll long long


int srch(string s, char a, char b) {
    int steps = 0;
	int j = s.size() - 1;
	while(j > 0 && s[j] != b){
		j--;
		steps++;
	}
 
	int i = j-1;
	while(i>0 && s[i] != a){
		i--;
		steps++;
	}
	return steps;
}

void solve() {
    string s; 
    cin >> s;
    
   
    vector<int> val(4);
    val[0] = srch(s, '0', '0');
    val[1] = srch(s, '2', '5');
    val[2] = srch(s, '5', '0');
    val[3] = srch(s, '7', '5');

    
    sort(val.begin(), val.end());
    cout << val[0] << endl;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    ll t; 
    cin >> t;
    while (t--) {
        solve();
    }

    return 0;
}
