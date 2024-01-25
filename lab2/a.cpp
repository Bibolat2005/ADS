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
    ListNode* head;
    ListNode* tail;
    LinkedList(){
        this->head=NULL;
        this->tail=NULL;
    }
    void AddAtHead(int value){
        ListNode* new_node=new ListNode(value);
        if(!this->tail){
            this->head=new_node;
            this->tail=new_node;
        }
        else{
            this->tail->next=new_node;
            this->tail=new_node;
        }
    }
    int offset(int k){
        ListNode* cur=head;
        int mn=abs(cur->value-k);
        int index=0;
        int i=0;
        while(cur!=NULL){
            int diff=abs(cur->value-k);
            if(diff<mn){
                mn=diff;
                index=i;
            }
            cur=cur->next;
            i++;
        }
        return index;
    }
    /*
    void print(){
        ListNode*cur=head;
        while(cur){
            cout<<cur->value<<" ";
            cur=cur->next;
        }
        
    }
    */
};
int main(){
    LinkedList* ll= new LinkedList();
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        ll -> AddAtHead(x);
    }
    int k;
    cin>>k;
    cout<<ll->offset(k);
}
