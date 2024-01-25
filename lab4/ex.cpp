#include<iostream>
using namespace std;
struct Node{
    int value;
    Node * left;
    Node * right;
    Node(int value){
        this->value=value;
        this->left=NULL;
        this->right=NULL;
    }
};

struct BST{
    Node * root;
    BST(){
        this->root=NULL;
    }

    Node * push(Node * cur,int value){
        if(cur==NULL){
            return new Node(value);
        }
        if(value<cur->value){
            cur->left=push(cur->left,int value);
        }
        if(value>cur->value){
            cur->right=push(cur->right,int value);
        }
        return cur;
    }

    void insert(int value){
        root=insert(root,value);
    }
};