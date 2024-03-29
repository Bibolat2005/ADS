#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

struct Node{
    int val;
    Node * right;
    Node * left;

    Node(int val){
        this -> val = val;
        right = left = nullptr;
    }
};

class BST{
    private:

    Node * push(Node * cur, int val){
        if(cur == nullptr){
            return new Node(val);
        }
        if(val > cur->val){
            cur->right = push(cur->right, val);
        }
        if(val < cur->val){
            cur->left = push(cur->left, val);
        }
        return cur;
    }

    Node * createBalancedTree(vector<int> &v, int start, int end){
        if (start > end){
            return nullptr;
        }
        int mid = (start + end)/2;
        Node * root = new Node(v[mid]);
        root -> left = createBalancedTree(v, start, mid - 1);
        root -> right = createBalancedTree(v, mid + 1, end);
        return root;
    }

    Node * inOrder(Node * cur){
        if(cur != nullptr){
            cout << cur -> val << " ";
            inOrder(cur -> left);
            inOrder(cur -> right);
        }
    }
   
    public:
    Node * root;

    BST(){
        root = nullptr;
    }
    
    void push(int val){
        root = push(root, val);
    }

    void inOrder(){
        inOrder(root);
    }

    Node * createBalancedTree(vector<int> &v){
        return createBalancedTree(v, 0, v.size() - 1);
    }
};

int main(){
    BST tree;
    int n;
    cin >> n;
    vector<int> v;
    for(int i = 0; i < pow(2, n) - 1; i++){
        int x;
        cin >> x;
        v.push_back(x);
    }
    sort(v.begin(), v.end());
    tree.root = tree.createBalancedTree(v);
    tree.inOrder();
}






































/*
#include<iostream>
#include<cmath>
#include<algorithm>
using namespace std;
void binary_search(int arr[],int left,int right){
    if(left<=right){
        int mid=left+(right-left)/2;
        cout<<arr[mid]<<" ";
        binary_search(arr,mid+1,right);
        binary_search(arr,left,mid-1);
    }
}

int main(){
    int n;
    cin>>n;
    int size=pow(2,n)-1;
    int arr[size];
    for(int i=0;i<size;i++){
        cin>>arr[i];
    }
    sort(arr,arr+size);
    binary_search(arr,0,size-1);
    return 0;

}
*/