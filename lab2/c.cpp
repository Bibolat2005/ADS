#include<iostream>
using namespace std;
struct ListNode{
    int value;
    ListNode* next;
    ListNode(int value){
        this->value=value;
        this->next=NULL;
    }
};
struct LinkedList{
    //int size;
    ListNode* head;
    ListNode* tail;
    LinkedList(){
        //this->size=0;
        this->head=NULL;
        this->tail=NULL;
    }
    void AddAtHead(int value){
        ListNode* new_node=new ListNode(value);
        //this->size++;
        if(!this->tail){
            this->head=new_node;
            this->tail=new_node;
        }
        else{
            this->tail->next=new_node;
            this->tail=new_node;
        }
    }
    void solve(){
        ListNode * cur=this->head;
        int i=1;
        while(cur){
            if(i%2==1){
                cout<<cur->value<<" ";
            }
            i++;
            cur=cur->next;
        }

    }
};
int main(){
        int n;
        cin>>n;
        LinkedList* ll=new LinkedList();
        for(int i=0;i<n;i++){
            int x;
            cin>>x;
            ll->AddAtHead(x);
        }
        ll->solve();
    }