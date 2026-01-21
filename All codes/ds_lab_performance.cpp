#include <bits/stdc++.h> 
using namespace std; 
#define ll long long 
#define fl(s,e) for(int i=s;i<e;i++)  
#define vll vector<ll> 
ll sm =0;
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
    void PB(ll val){
        node* nn= new node(val);
        if(!head)head= tail = nn;
        else{
            tail->next = nn;
            nn->prev = tail;
            tail = nn;
        }
    }   
    void DEL(){
        node* cur = head;
        //
        while(cur){
            if(cur->data%2==0){
                cur= cur->next;
                continue;}
            sm+=cur->data;
        if(cur==head)head = cur->next;
        if(cur==tail)cur = cur->prev;
        if(cur->prev)cur->prev->next= cur->next;
        if(cur->next)cur->next->prev= cur->prev;
        delete cur;
        }
        
    }
    void PRINT() {
        node* temp = head;
        while (temp) {
            cout << temp->data << " ";
            temp = temp->next;
        }
        cout << endl;
    }   
};

int main() { 
    dll dd;
    fl(1,9){
        ll x; cin >> x;dd.PB(x);
    }
    dd.PRINT();
    dd.DEL();
    dd.PB(sm);
    dd.PRINT();
}

