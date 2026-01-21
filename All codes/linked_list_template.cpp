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
    void PF(int x){
        Node* nn = new Node(x);
        if(!head){
            head= tail = nn;
        }
        nn->next = head;
        head = nn;
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
    void POPF(){
        if(!head)return;
        Node* tmp =  head;
        head= head->next;
        tmp->next = NULL;
        delete tmp;
    }
    void POPB(){
        if(!head)return;
        Node* tmp =  head;
        while(tmp->next !=tail){
            tmp = tmp->next;
        }
        Node* tmp2 =  tail;
        tmp->next = NULL;
        tail= tmp;
        delete tmp2;
    }
    void INS(int x,int n){
        if(n==0){
            PF(x);return;
        }
        Node* nn = new Node(x);
        Node* tmp =  head;
        fl(0,n-1){
            if(!tmp)return;
            tmp = tmp->next;
        }
        nn->next= tmp->next;
        tmp->next= nn;

    }
    void DL(int n){
        Node* tmp =  head;
        fl(0,n-2){
            if(!tmp)return;
            tmp = tmp->next;
        }
        Node* dl = tmp->next;
        tmp->next = dl->next;
        delete dl;
    }
    void REV(){
        Node* cur= head;
        Node* prev=NULL;
        Node* nxt=NULL;
        while(cur){
            nxt = cur->next;// temp;    1->2->3->4   <-1
            cur->next = prev;// curr k ulta
            prev = cur;// swap
            cur = nxt;// 1 ghor agano
        }
        tail = head;
        head = prev;
        

    }
    Node* MIDF(){
        if(!head)return NULL;
        Node* slow = head,*fast = head;
        while(fast && fast->next){
            slow= slow->next;
            fast = fast->next->next;
        }
        return slow;
    }
    bool LOPF(){
        if(!head)return NULL;
        Node* slow = head,*fast = head;
        while(fast && fast->next){
            slow= slow->next;
            fast = fast->next->next;
            if(slow==fast)return 1;
        }
        return 0;
    }
    void removeDuplicates() {
    Node* curr = head;
    while (curr && curr->next) {
        if (curr->data == curr->next->data)
            curr->next = curr->next->next;
        else
            curr = curr->next;
    }
    
    }
    void DRK(ll k){
        Node* slow = head,*fast = head;
        fl(0,k)fast=fast->next;
        if(!fast) POPF();
        while(fast->next){
            slow= slow->next;
            fast= fast->next;
        }
        slow->next = slow->next->next;
    }
    



};


void siuu(){ 
    ll gg; cin >> gg;
    LL lnk ;
    fl(0,4) lnk.PB(i+1);
    lnk.PR();
    lnk.INS(99,2);
    lnk.PR();
    lnk.DL(3);
    lnk.PR();
    lnk.REV();
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
