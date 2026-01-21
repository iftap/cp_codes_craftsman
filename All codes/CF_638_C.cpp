#include <bits/stdc++.h>
using namespace std;
const int N=32000;
bool prime[N+1];
vector<int>primes;
void sieve()
{
    for(int i=2;i<=N;i++)prime[i]=true;
    
    for(int p=2;p*p<=N;p++) {
        if (prime[p]) {
            for (int i=p*p;i<=N;i+=p){
                prime[i]=false;
            }
        }
    }
    for(int i=2;i<=N;i++)if(prime[i])primes.push_back(i);
}

int main(){
    sieve();
    
    vector<pair<int,int>>vpr;
    for(int i=0;i<primes.size()-2;i++){
        int x=primes[i];
        int j=i+1;
        int dif=primes[i+1]-primes[i];
        while(j+1<primes.size() && primes[j+1]-primes[j]==dif){
            j++;
        }
        if(j-i+1>=3)vpr.push_back({i,j});
        i=j-1;
    }
    
    int l,r;
    while(cin>>l>>r){
        if(l==0 && r==0)break;
        if(l>r)swap(l,r);
        for(auto [a,b]:vpr){
            if(primes[a]>=l && primes[b]<=r){
                for(int i=a;i<=b;i++){
                    cout<<primes[i]; if(i!=b)cout<<" ";
                }cout<<endl;
            }
        }
    }
    return 0;
}