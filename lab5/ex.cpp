#include<iostream>
#include<vector>
using namespace std;
struct MinHeap{
    vector<int>heap;
    int parent(int i){
        return (i-1)/2;
    }
    int left(int i){
        return 2*i+1;
    }
    int right(int i){
        return 2*i+2;
    }

    void insert(int value){
        heap.push_back(value);
        int i=heap.size()-1;
        while(i!=0 && heap[parent(i)]>heap[i]){
            swap(heap[parent(i)],heap[i]);
            i=parents(i);
        }
    }

    int extractMin(){
        if(heap.size()==0) return 0;
        if(heap.size()==1){
            int root=heap[0];
            heap.pop_back();
            return 0;
        }
        int root=heap[0];
        heap[0]=heap[heap.size()-1];
        heap.pop_back();
        heapify(0);
        return root;
    }

    void heapify(int i){
        int l=left(i);
        int r=right(i);
        int smallest=i;
        if(l<heap.size() && heap[l]<heap[smallest]){
            smallest=l;
        }
        if(r<heap.size() && heap[r]<heap[smallest]){
            smallest=r;
        }

        if(smallest!=i){
            swap(heap[smallest],heap[i]);
            heapify(smallest);
        }
    }
    int get_size(){
        return heap.size();
    }
};

int main(){
    int n;
    cin>>n;
    MinHeap * heap=new MinHeap();
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        heap->insert(x);
    }

    if(heap->get_size==1){
        cout<<heap->extractMin<<" "; 
    }
}