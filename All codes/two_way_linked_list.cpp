#include <bits/stdc++.h> 
#include <bitset>
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

struct node{
    ll data;
    node* prev;
    node* next;
    node(ll val ){
        data =val;
        prev= next = NULL;
    }
};

class dll{
    node* head;
    node* tail;
public:
    dll(){
        head= tail= NULL;
    }
    // push front
    void PF(ll val){
        node* nn = new node(val);
        if(!head) head= tail = nn;
        else{
            nn->next= head;
            head->prev=nn;
            head= nn;
        }
    }
    // push back
    void PB(ll val){
        node* nn= new node(val);
        if(!head)head= tail = nn;
        else{
            tail->next = nn;
            nn->prev = tail;
            tail = nn;
        }
    }
    // dellete value
    void DEL(ll val){
        node* cur = head;
        while(cur && cur->data!=val)cur = cur->next;
        if(!cur){
            cout <<"no value such that !\n";return;
        }
        if(cur==head)head = cur->next;
        if(cur==tail)cur = cur->prev;
        if(cur->prev)cur->prev->next= cur->next;
        if(cur->next)cur->next->prev= cur->prev;
        delete cur;
    }
    void PRINT() {
        node* temp = head;
        while (temp) {
            cout << temp->data << " ";
            temp = temp->next;
        }
        cout << "\n";
    }
    // insert at posi  x
    void ins(ll ind , ll val){
        node* nn = new node(val);
        node* curr = head;
        fl(1,ind-1){
            if(curr->next)curr= curr->next;
            else{
                cout <<"index out of range \n";return;
            }
        }
        curr->next->prev= nn;
        nn->next=  curr->next;
        nn->prev= curr;
        curr->next = nn;

    }

    // reverse the ll 
    void RV(){
        node* cur = head;
        
        while(cur){
            node* temp= cur->next;
            cur->next= cur->prev;
            cur->prev = temp;
            cur = temp;
            
        }
        
        cur = tail;
        tail = head;
        head = cur;

    }
};




void siuu(){
    dll dd;
    //fl(1,9)dd.PB(i);
    fl(1,9)dd.PF(i);
    dd.PRINT();
    //dd.ins(99,2);
    dd.ins(2,80);
    dd.RV();
    dd.PRINT();

    

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

