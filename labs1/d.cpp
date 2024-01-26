#include<iostream>
#include<algorithm>
#include<stack>
#include<string>
using namespace std;
int main(){
    string s;
    cin>>s;
    stack<char>st;
    for(int i=0;i<s.size();i++){
        if(!st.empty() && s[i]==st.top())
            st.pop();
        else
            st.push(s[i]);
    }
    if(st.empty())
        cout<<"Yes";
    else
        cout<<"No";
}