#include <bits/stdc++.h>
using namespace std;
const int N=100000;
bool prime[N+1];
vector<int>primes;
void sieve()
{
    prime[1]=true;
    for(int i=2;i<=N;i++)prime[i]=true;
    
    for(int p=2;p*p<=N;p++) {
        if (prime[p]) {
            for (int i=p*p;i<=N;i+=p){
                prime[i]=false;
            }
        }
    }
    for(int i=1;i<=N;i++)if(prime[i])primes.push_back(i);
}

int main(){
    sieve();
    int n,c;
    while(cin>>n>>c){
        cout<<n<<" "<<c<<":";
        
        vector<int>v;
        for(auto x:primes){
            if(x>n)break;
            v.push_back(x);
        }
        if(v.size()%2==0){
            if(v.size()<2*c){
                for(auto x:v)cout<<" "<<x;
            }
            else{
                int m=v.size()/2;
                for(int i=m-c;i<m+c;i++)cout<<" "<<v[i];
            }
        }
        else{
            if(v.size()<(2*c)-1){
                for(auto x:v)cout<<" "<<x;
            }
            else{
                int m=v.size()/2;
                c--;
                for(int i=m-c;i<m;i++)cout<<" "<<v[i];
                cout<<" "<<v[m];
                for(int i=m+1;i<=m+c;i++)cout<<" "<<v[i];
            }
        }
        cout<<endl<<endl;
    }
    
    return 0;
}