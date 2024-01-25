/*
элементты басына енгызу
5
2
лист из 2
3
лист из 3 2 
*/
#include <iostream>
using namespace std;
struct Node{
    int data;
    Node* next;
};
Node* Insert(Node * head,int x){
    Node* temp=new Node();
    temp->data=x;
    temp->next=NULL;
    if(head!=NULL)
    temp->next=head;
    head=temp;
    return head;

}
void Print(Node* head){
    cout<<("List is: ");
    while(head!=NULL){
        cout<< " "<< head->data;
        head=head->next;
    }
    cout<<endl;
}
int main(){
    Node* head=NULL;
    cout<<"How many numbers?\n";
    int n,i,x;
    cin>>n;
    for(i=0;i<n;i++){
        cout<<"Enter"<<endl;
        cin>>x;
        head=Insert(head,x);
        Print(head);
}
}
