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
    void fn(dll dd1 ,dll dd2){
        node* c1= dd1.head;
        node* c2 = dd2.head;
        node* cur= head;
        while(c1 || c2){
            if(c1){
                node* nn = new node(c1->data);
                if(!head)head= tail = nn;
                else{
                    tail->next = nn;
                    nn->prev = tail;
                    tail = nn;
                }
                c1= c1->next;
            }
            if(c2){
                node* nn = new node(c2->data);
                if(!head)head= tail = nn;
                else{
                    tail->next = nn;
                    nn->prev = tail;
                    tail = nn;
                }
                c2= c2->next;
            }   
        }
        } 
};

int main() { 
    dll dd1,dd2,dd3;
    fl(1,9)dd1.PB(i);
    fl(70,80)dd2.PB(i);
    
    dd3.fn(dd1,dd2);
    dd3.PRINT();
}

