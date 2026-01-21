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
    
    void PRINT() {
        node* temp = head;
        while (temp) {
            cout << temp->data << " ";
            temp = temp->next;
        }
        cout << "\n";
    }
    

    void query(ll l , ll r){
        node* cur = head;
        node*end;
        while(cur){
            end= cur;
            cur= cur->next;
        }
        cur= head;
        while(cur!=end){
            if(cur->data>=l && cur->data<=r){
              node* nn= new node(cur->data);
                if(!head)head= tail = nn;
                else{
                    tail->next = nn;
                    nn->prev = tail;
                    tail = nn;
                }

                //deletion
                if(cur==head)head = cur->next;
                if(cur==tail)cur = cur->prev;
                if(cur->prev)cur->prev->next= cur->next;
                if(cur->next)cur->next->prev= cur->prev;
                delete cur;
                
            }
            cur= cur->next;
        }


    }

    
};




void siuu(){
    dll dd;
    fl(1,9)dd.PB(i);
    //fl(1,9)dd.PB(i);
    dd.PRINT();
    //dd.ins(99,2);
    dd.query(3,4);
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

