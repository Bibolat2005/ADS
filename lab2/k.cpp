#include<iostream>
using namespace std;
struct ListNode{
    char value;
    ListNode* next;
    bool check;
    ListNode(char value){
        this->value=value;
        this->next=NULL;
        this->check=false;
    }
};
struct LinkedList{
    ListNode* head;
    ListNode*tail;
    int size;
    LinkedList(){
        this->head=NULL;
        this->tail=NULL;
        this->size++;
    }
    void push(char value){
        ListNode* new_node=new ListNode(value);
        if(this->head==NULL){
            this->head=new_node;
            this->tail=new_node;
        }
        else{
            ListNode* cur=this->head;
            while(cur){
                if(cur->value==value){
                    cur->check=true;
                    return;
                }
                cur=cur->next;
            }
            this->tail->next=new_node;
            this->tail=new_node;
        }
    }
    void ans(){
        bool ok=false;
        ListNode* cur=this->head;
        while(cur){
            if(!cur->check){
                cout<<cur->value<<" ";
                ok=true;
                break;
            }
            cur=cur->next;
        }
        if(!ok){
            cout<<"-1 ";
        }
    }
};
int main(){
    int n,x;
    LinkedList* ll=new LinkedList();
    cin>>x;
    for(int i=0;i<n;i++){
        cin>>x;
        char c;
        for(int j=0;j<x;j++){
            cin>>c;
            ll->push(c);
            ll->ans();
        }
        cout<<endl;
    }
}