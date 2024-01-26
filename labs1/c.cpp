#include<iostream>
#include<string>
#include<stack>
#include<algorithm>
using namespace std;
int main(){
    stack<char>st;
    string s,t;
    cin>>s>>t;
    string s1="",t1="";
    for(int i=0;i<s.size();i++){
        if(s[i]=='#')
            st.pop();
        
        else
            st.push(s[i]);
    }
    while(!st.empty()){
        s1+=st.top();
        st.pop();
    }
    for(int i=0;i<t.size();i++){
        if(t[i]=='#')
            st.pop();
        
        else
            st.push(t[i]);
        
    }
    while(!st.empty()){
        t1+=st.top();
        st.pop();
    }
    if(s1==t1)
        cout<<"Yes";
    
    else
        cout<<"No";
    return 0;
}