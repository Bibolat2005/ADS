/*
#include<iostream>
#include<vector>
using namespace std;


vector<int>prefix(string s){
    int n=(int)s.size();
    vector<int>pi(n);
    for(int i=1;i<n;i++){
        int j = pi[i-1];
        while(j>0 && s[i]!=s[j]){
            j=pi[j-1];
        }
        if(s[i]==s[j]){
            j++;
        }
        pi[i]=j;
    }
    return pi;
}

int KMP(string txt,string pat){
    int cnt=0;
    string p=pat+'#'+txt;
    vector<int>pi=prefix(p);
    for(int i=pat.size()+1;i<p.size();i++){
        if(pi[i]==pat.size()){
            cnt++;
        }
    } 
    return cnt;
}
*/






#include<iostream>
#include<vector>
using namespace std;

vector<int>prefix(string s){
    int n=s.size();
    vector<int>pi(n);
    for(int i=0;i<n;i++){
        int j=pi[i-1];
        while(j>0 && s[i]!=s[j]){
            j=pi[j-1];
        }
        if(s[i]==s[j]){
            j++;
        }
        pi[i]=j;
    }
    return pi;
}


int KMP(string txt,string pat){
    int cnt=0;
    string p=pat+'#'+txt;
    vector<int>pi=prefix(p);
    for(int i=pat.size()+1;i<p.size();i++){
        if(p[i]==pat.size()){
            cnt++;
        }
    }
    return cnt;
}