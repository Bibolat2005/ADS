#include<iostream>
#include<algorithm>
#include<deque>
using namespace std;
int main(){
    char s;
    int a;
    bool check=true;
    deque<int>bibo;
    while(check){
        cin>>s;
        if(s=='+'){
            cin>>a;
            bibo.push_front(a);
        }
        if(s=='-'){
            cin>>a;
            bibo.push_back(a);
        }
        if(s=='*'){
            if(bibo.empty()){
                cout<<"error"<<endl;
            }
            else{
                cout<<bibo.front()+bibo.back()<<endl;
                if(!bibo.empty()) bibo.pop_front();
                if(!bibo.empty()) bibo.pop_back();
            }
        }
        if(s=='!'){
            check=false;
        }
    }
}