#include<iostream>
using namespace std;
struct Node{
    int value;
    Node * next;
    Node(int value){
        this->value=value;
        this->next=NULL;
    }
};

struct LinkedList{
    Node * head;
    Node * tail;
    LinkedList(){
        this->head=NULL;
        this->tail=NULL;
    }

    void push_back(int value){
        Node * new_node=new Node(value);
        if(!this->tail){
            this->head=new_node;
            this->tail=new_node;
        }
        else{
            this->tail->next=new_node;
            this->tail=new_node;
        }
    }

    void push_front(int value){
        Node * new_node=new Node(value);
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
        Node * cur=this->head;
        int i=1;
        while(cur){
            if(i%2==0){
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
    LinkedList * ll=new LinkedList();
}