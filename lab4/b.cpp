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
    private:
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
    public:
    void insert(int value){
        root=push(root,value);
    }
    Node * found(int target){
        Node * cur= root;
        while(cur->value!=target){
            if(target>cur->value){
                cur=cur->right;
            }
            else{
                cur=cur->left;
            }
        }
        return cur;
    }
    int getSubtree(Node * cur){
        if(cur==NULL){
            return 0;
        }
        else{
            return getSubtree(cur->left)+getSubtree(cur->right)+1;
        }
    }
};
int main(){
    BST tree;
    int n,m,x;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>x;
        tree.insert(x);
    }
    cin>>m;
    Node * find=tree.found(m);
    cout<<tree.getSubtree(find);

}