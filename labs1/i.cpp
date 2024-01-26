#include<iostream>
#include<queue>
using namespace std;
int main(){
    int n;
    cin>>n;
    string str;
    cin>>str;
    queue<int>s,k;
    for(int i=0;i<str.size();i++){
        if(str[i]=='S'){
            s.push(i);
        }
        else{
            k.push(i);
        }
    }
    while(!s.empty() && !k.empty()){
        int sat=s.front();
        int kat=k.front();
        s.pop();
        k.pop();
        if(sat>kat){
            k.push(kat+n);
        }
        else{
            s.push(sat+n);
        }
    }
    if(s.empty()){
        cout<<"Katsuragi";
    }
    else{
        cout<<"Sakayanagi";
    }
}