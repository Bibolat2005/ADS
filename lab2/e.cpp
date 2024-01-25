#include<iostream>
using namespace std;
struct ListNode{
    string val;
    ListNode* next;
    ListNode(){
        this->val="";
        this->next=NULL;
    }
    ListNode(string val){
        this->val=val;
        this->next=NULL;
    }
};
struct LinkedList{
    ListNode* head;
    ListNode* tail;
    int size;
    LinkedList(){
        this->size=0;
        this->head=NULL;
        this->tail=NULL;
    }
    void push_front(string val){
        this->size++;
        ListNode* new_node=new ListNode(val);
        if(head==NULL){
            this->head=new_node;
            this->tail=new_node;
        }
        else{
            new_node->next=this->head;
            this->head=new_node;
        }
    }
    void print(){
        ListNode* cur=this->head;
        while(cur){
            cout<<cur->val<<endl;
            cur=cur->next;
        }
        cout<<endl;
    }
};
int main(){
    LinkedList* ll=new LinkedList();
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        string s;
        cin>>s;
        if(s=="" || (ll->head && ll->head->val==s)){
            continue;
        }
        else{
            ll->push_front(s);
        }
    }
    cout<<"All in all: "<<ll->size<<endl;
    cout<<"Students:"<<endl;
    ll->print();
    return 0;
}