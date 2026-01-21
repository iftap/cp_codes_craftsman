#include <bits/stdc++.h> 
using namespace std; 
#define ll long long 
#define pb push_back 
#define all(v) v.begin(), v.end() 
#define rall(v) v.rbegin(), v.rend() 
#define cy cout << "YES\n" 
#define cn cout << "NO\n" 
#define fl(s,e) for(int i=s;i<e;i++) 
#define flj(s,e) for(int j=s;j<e;j++) 
#define vll vector<ll> 
#include<numeric> 
#define sz size() 

class Node{
    public:
    int data;
    Node* next;
    
    Node(int x){
        data = x;
        next = NULL;
    }
};

class LL{
    Node* head;
    Node* tail;

public:
    LL(){
        head=tail= NULL;
    }
    
    void PR(){
        Node* tmp= head;
        cout <<"printing....\n";
        while(tmp){
            cout << tmp->data<<" -> ";
            tmp = tmp->next;
        }
        cout << endl;
    }
    void PB(int x){
        Node* nn = new Node(x);
        if(!head){
            head= tail = nn;
        }
        tail->next = nn;
        tail = nn;
    }
    void cng(){
        Node* temp = head;
        while(temp->next->next){
            temp = temp->next;
        }
        temp->next= NULL;
        Node* tt = head;
        tail->next = head;
        head = tail;
        tail= temp;
        tail->next= NULL;


    }
    



};


void siuu(){ 
    ll gg; cin >> gg;
    LL lnk ;
    fl(0,10) lnk.PB(i+1);
    lnk.PR();
    lnk.cng();
    lnk.PR();
    

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
