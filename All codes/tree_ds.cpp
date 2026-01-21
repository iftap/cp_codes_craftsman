


#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

#define pb      push_back
#define debug   cout<<"check"<<endl;cout.flush();
#define all(x)  (x).begin(),(x).end()
#define endl    '\n'

const ll N=200005;
const ll mod=1000000007;
const ll INF=2e18L+5;

struct Node{
    ll key;
    Node *l, *r;
    Node(ll _k): key(_k), l(nullptr), r(nullptr){}
};

Node* newnode(ll x){ return new Node(x); }

void insert(Node *&root, ll x){
    if(!root){ root = newnode(x); return; }
    if(x < root->key) insert(root->l, x);
    else if(x > root->key) insert(root->r, x);
}

Node* search(Node *root, ll x){
    if(!root) return nullptr;
    if(root->key == x) return root;
    if(x < root->key) return search(root->l, x);
    return search(root->r, x);
}

Node* findMin(Node *root){
    if(!root) return nullptr;
    while(root->l) root = root->l;
    return root;
}

Node* findMax(Node *root){
    if(!root) return nullptr;
    while(root->r) root = root->r;
    return root;
}

void erase(Node *&root, ll x){
    if(!root) return;
    if(x < root->key) erase(root->l, x);
    else if(x > root->key) erase(root->r, x);
    else{
        // found node to delete
        if(!root->l && !root->r){
            delete root; root = nullptr;
        } else if(!root->l){
            Node *tmp = root; root = root->r; delete tmp;
        } else if(!root->r){
            Node *tmp = root; root = root->l; delete tmp;
        } else{
            Node *mn = findMin(root->r);
            root->key = mn->key;
            erase(root->r, mn->key);
        }
    }
}

void inorder(Node *root, vector<ll> &out){
    if(!root) return;
    inorder(root->l, out);
    out.pb(root->key);
    inorder(root->r, out);
}

void preorder(Node *root, vector<ll> &out){
    if(!root) return;
    out.pb(root->key);
    preorder(root->l, out);
    preorder(root->r, out);
}

void postorder(Node *root, vector<ll> &out){
    if(!root) return;
    postorder(root->l, out);
    postorder(root->r, out);
    out.pb(root->key);
}

void clearTree(Node *&root){
    if(!root) return;
    clearTree(root->l);
    clearTree(root->r);
    delete root; root = nullptr;
}

void printVec(const vector<ll> &v){
    for(auto x: v) cout<<x<<' ';
    cout<<endl;
}

void solve(){
    Node *root = nullptr;
    vector<ll> a = {50,30,20,40,70,60,80};
    for(auto x: a) insert(root, x);

    vector<ll> out;
    inorder(root, out);
    cout<<"Inorder after inserts: "; printVec(out);

    cout<<"Search 40: "<<(search(root,40)?"found":"not found")<<endl;
    cout<<"Search 100: "<<(search(root,100)?"found":"not found")<<endl;

    cout<<"Min: "<<(findMin(root)?to_string(findMin(root)->key):string("none"))<<"  ";
    cout<<"Max: "<<(findMax(root)?to_string(findMax(root)->key):string("none"))<<endl;

    erase(root, 50); // delete root (two children)
    out.clear(); inorder(root, out);
    cout<<"Inorder after erasing 50: "; printVec(out);

    erase(root, 20);
    out.clear(); inorder(root, out);
    cout<<"Inorder after erasing 20: "; printVec(out);

    // clean up
    clearTree(root);
}

int32_t main(){  
    ios::sync_with_stdio(false);cin.tie(nullptr);
    
    int t=1;
    //cin>>t;
    for(int i=1;i<=t;i++){
        solve();
    }
    
    return 0;
}