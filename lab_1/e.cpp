#include<iostream>
#include<deque>
using namespace std;
int main(){
    deque<int>b,n;
    int count=0;
    for(int i=0;i<5;i++){
        int x;
        cin>>x;
        b.push_back(x);
    }
    for(int i=0;i<5;i++){
        int x;
        cin>>x;
        n.push_back(x);
    }
    while(!b.empty() && !n.empty() && count!=1000000){
        int boris=b.front();
        int nursik=n.front();
        b.pop_front();
        n.pop_front();
        if(boris==9 && nursik==0){
            n.push_back(boris);
            n.push_back(nursik);
        }
        else if(nursik==9 && boris==0){
            b.push_back(boris);
            b.push_back(nursik);
        }
        else if(boris>nursik){
            b.push_back(boris);
            b.push_back(nursik);
        }
        else{
            n.push_back(boris);
            n.push_back(nursik);
        }
        count++;
    }
    if(!b.empty()){
        cout<<"Boris "<<count<<endl;
    }
    else if(!n.empty()){
        cout<<"Nursik "<<count<<endl;
    }
    else{
        cout<<"blin nichya"<<endl;
    }
    return 0;
}