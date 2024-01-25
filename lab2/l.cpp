#include<iostream>
using namespace std;
struct ListNode{
    int value;
    ListNode* next;
    ListNode(){
        this->value=0;
        this->next=NULL;
    }
    ListNode(int value){
        this->value=value;
        this->next=NULL;
    }
};
struct LinkedList{
    int size;
    ListNode* head;
    ListNode* tail;
    LinkedList(){
        this->size=0;
        this->head=NULL;
        this->tail=NULL;
    }
    void AddAtTail(int value){
        ListNode* new_node=new ListNode(value);
        if(!this->tail){
            this->head=new_node;
            this->tail=new_node;
        }
        else{
            this->tail->next=new_node;
            this->tail=new_node;
        }
        this->size++;
    }

   int maxSum() {
        ListNode* cur = this->head;
        int maxSoFar = -1e9, maxEndingHere = 0;
        while(cur) {
            maxEndingHere += cur->value;
            maxEndingHere = max(maxEndingHere, cur->value);
            maxSoFar = max(maxSoFar, maxEndingHere);
            cur = cur->next;
        }
        return maxSoFar;
    }
    

/*
   int maxSum(){
    int max=-1e9;
    int current_max=0;
    ListNode* cur=this->head;
    while(cur!=NULL){
        current_max=current_max+cur->value;
        if(current_max>max){
            max=current_max;
        }
        if(current_max<0){
            current_max=0;
            cur=cur->next;
        }
    }
    return max;
   }
   */
};


int main(){
    LinkedList* ll=new LinkedList();
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        ll->AddAtTail(x);   
    }
    cout<<ll->maxSum();
}