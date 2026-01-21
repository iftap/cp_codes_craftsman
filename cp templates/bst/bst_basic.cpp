#include <bits/stdc++.h> 
#include <bitset>
using namespace std; 
#define all(v) v.begin(), v.end() 
#define rall(v) v.rbegin(), v.rend() 
#define cy cout << "YES\n" 
#define cn cout << "NO\n" 
#define fl(s,e) for(int i=s;i<e;i++) 
#define flj(s,e) for(int j=s;j<e;j++) 
#define vll vector<ll> 
#include<numeric> 
#define sz size()
typedef long long       ll;
typedef long double     ld;
typedef vector<int>     vi;
typedef vector<vi>      vvi;
typedef vector<vll>     vvll;
typedef vector<bool>    vb;
typedef vector<vb>      vvb;
typedef pair<int, int>  pi;
typedef vector<pi>      vpi;
typedef pair<ll, ll>    pll;
typedef vector<pll>     vpll;
#define pb              push_back
#define ff              first
#define ss              second
#define flr(i, a, b)    for(ll i = (a); i >= (b); i--)
#define lcm(a, b)       ((a / __gcd(a, b)) * b)


struct node{
    ll data;
    node *l ,*r;
    node(ll val){
        data = val;
        l=r=NULL;
    }
};

node* inse(node *root , ll val){
    if(!root)return new node(val);
    if(val<root->data)root->l= inse(root->l,val);
    else root->r= inse(root->r,val);
    return root;
    
}

void inorder(node *root){
    if(!root)return;
    inorder(root->l);
    cout << root->data <<' ';
    inorder(root->r);
}

ll minval(node *root){
    while(root->l)root=root->l;
    return root->data;
}
/*delet e\



*/

node* insuc(node* root){
    while(root->l)root=root->l;
    return root;
}
node* deli(node *root,ll key){
    if(root==nullptr)return root;

    if(key<root->data)root->l=deli(root->l,key);
    else if(key>root->data)root->r=deli(root->r,key);
    else{
        ///value == key

        // case 1 and 2
        if(root->l==NULL){
            node* temp= root->r;
            delete root;
            return temp;
        }
        else if(root->r = NULL){
            node* temp= root->l;
            delete root;
            return temp;
        }

        // case 3
        node* temp = insuc(root->r);
        root->data = temp->data;
        root->r= deli(root->r,remp->data);
    }
}


void siuu(){
    

} 
 
int main() { 
    ios::sync_with_stdio(false); 
    cin.tie(nullptr); 
    //seive();
    ll t=1;  
    //cin >> t; 
    while (t--) { 
        siuu(); 
    } 
 
    return 0; 
}


