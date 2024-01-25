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
    Node* root;
    BST(){
        root=NULL;
    }

private:
    Node * push(Node * cur,int value){
        if(cur==NULL){ 
            return new Node(value);
        }
        if(value<cur->value){ 
            cur->left=push(cur->left,value);
        }
        if(value>cur->value) {
            cur->right=push(cur->right,value);
        }
        return cur;
    }
    public:
    void insert(int value){
        root=push(root,value);
    }
    void ans(string s){
        bool check = true;
        Node * cur=root;
        for(int i=0;i<s.size();i++){
            if(s[i]=='L'){
                cur=cur->left;
            }
            if(s[i]=='R'){
                cur=cur->right;
            }
            if(cur==NULL){
                check=false;
                break;
            }
        }
        if(check){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }
};
int main(){
    BST tree;
    int n,m;
    string s;
    cin>>n>>m;
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        tree.insert(x);
    }
    for(int j=0;j<m;j++){
        cin>>s;
        tree.ans(s);
    }
}








/*
void inorder(Node* node) {
		if (!node) return;
		this->inorder(node->left);
		cout << node->value << " ";
		this->inorder(node->right);
	}
	void preorder(Node* node) {
		if (!node) return;
		cout << node->value << " ";
		this->preorder(node->left);
		this->preorder(node->right);
	}
	void postorder(Node* node) {
		if (!node) return;
		this->postorder(node->left);
		this->postorder(node->right);
		cout << node->value << " ";
	}
*/