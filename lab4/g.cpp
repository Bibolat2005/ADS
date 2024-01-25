#include<iostream>
using namespace std;
struct Node{
    int value;
    Node* left;
    Node* right;
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
            cur->left=push(cur->left,value);
        }
        if(value>cur->value){
            cur->right=push(cur->right,value);
        }
        return cur;
    }
    int height(Node * cur){
        if(cur==NULL){
            return 0;
        }
        return max(height(cur->left),height(cur->right))+1;
    }

    int maxDistance(Node * cur){
        if(cur==NULL){
            return 0;
        }
        int lheight=height(cur->left);
        int rheight=height(cur->right);
        int ldis=maxDistance(cur->left);
        int rdis=maxDistance(cur->right);
        return max(lheight+rheight+1,max(ldis,rdis));
    }
    void push(int value){
        root=push(root,value);
    }
    int height(){
        return height(root);
    }
    int maxDistance(){
        return maxDistance(root);
    }
};

int main(){
    BST tree;
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        tree.push(x);
    }
    cout<<tree.maxDistance();
    tree.height();
}