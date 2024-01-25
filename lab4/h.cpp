#include<iostream>


using namespace std;

struct Node {
	int value;
	Node* left, * right;
	Node(int value) {
		this->value = value;
		left = right = NULL;
	}
};

struct BST {
	Node* root;
	BST() {
		root = NULL;
	}

private:
    Node * push(Node * cur, int val){
        if(cur == NULL) return new Node(val);
        if(val < cur -> value) cur -> left = push(cur -> left, val);
        if(val > cur -> value) cur -> right = push(cur -> right, val);
        return cur;
    }

public:
	void insert(int value) {
		root = push(root, value);
	}

    void ans(Node * cur, int &sum){
        if(!cur) return;
        ans(cur -> right, sum);
        cur -> value += sum;
        cout << cur -> value << " ";
        sum = cur -> value;
        ans(cur -> left, sum);
    }
};

int main() {
	BST tree;
    int n, x;
    cin >> n;
    for(int i = 0; i < n; i++){
        cin >> x;
        tree.insert(x);
    }
    int ans = 0;
    tree.ans(tree.root, ans);
}