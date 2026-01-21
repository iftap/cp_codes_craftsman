#include <bits/stdc++.h>
using namespace std;

vector<int> BPS(string pat) {
    int len = pat.size();
    vector<int> lps(len + 1, 0);
    for(int i = 2;i <= len; i++) {
        int prev = lps[i - 1];
        while(1) {
            if (pat[prev] == pat[i - 1]) {
                lps[i] = prev + 1;
                break;
            }
            if (prev == 0) {
                lps[i] = 0;
                break;
            }
            prev = lps[prev];
        }
    }
    return lps;
}

vector<int> res;


void KMP(vector<int> lps, string text, string pat) {
    int tlen = text.size();
    int plen = pat.size();
    int t = 0, p = 0;
    while(t <tlen){
        if(text[t] == pat[p]){
            t++;
            p++;
            if(p == plen){
                res.push_back(t - p);
                p = lps[p];
            }
        } else {
            if(p==0)  t++;
            else p = lps[p];
        }
    }
}

int main() {
    string pat,tex;cin >> pat >> tex;
    vector<int> lps = BPS(pat);
    KMP(lps, tex,pat);
    cout << "Text: " << tex << endl;
    cout << "Pattern: " << pat<< endl;
    cout << "Pattern found at index: ";

    for (int pos:res)cout << pos << " ";
    cout << 1;
    cout << endl;
}
