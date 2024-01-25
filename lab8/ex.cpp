#include<iostream>
#include<vector>
using namespace std;
int p=31;
int q=1e9+7;

long long getHash(string s){
    long long hash=0;
    long long pow=1;
    for(int i=0;i<s.size();i++){
        long long curH=(s[i]-'a'+1)*pow%q;
        hash=(hash+curH)%q;
        pow=(pow*p)%q;
    }
    return hash;
}

vector<long long>prefHash(string s){
    vector<long long>h(s.size());
    long long pow=1;
    for(int i=0;i<s.size();i++){
        h[i]=(s[i]-'a'+1)*pow%q;
        if(i){
            h[i]=(h[i]+h[i-1])%q;
        }
    }
    return h;
}

void f(string s){
    for(int i=0;i<s.size();i++){
        cout<<s.substr(0,i+1)<<endl;
    }
}




void f2(string t,string s){//внутри t ищем s
    long long p[t.size()];
    long long q=1e9+7;
    long long h[t.size()];
    p[0]=1;
    for(int i=0;i<s.size();i++){
        p[i]=p[i-1]*31;
    }

    for(int i=0;i<t.size();i++){
        if(i==0) h[i]=t[i]-'a'+1;
        else h[i]= h[i-1]+(t[i]-'a'+1)*p[i];
    }

    long long h_s=0;
    for(int i=0;i<s.size();i++){
        h_s+=(s[i]-'a'+1)*p[i];
    }


}

int main(){
    string s;
    cin>>s;
    cout<<getHash(s)<<endl;
    vector<long long>res=prefHash(s);
    for(long long value:res){
        cout<<value<<" ";
    }
    cout<<endl;
        f(s);

}




#include<iostream>
using namespace std;
#include<vector>
int p=31;
int q=1e9+7;

long long getHash(string s){
    long long hash=0;
    long long pow=1;
    for(int i=0;i<s.size();i++){
        long long curH=(s[i]-'a'+1)*pow%q;
        hash=(hash+curH)%q;
        pow=(pow*p)%q;
    }
    return hash;
}

vector<long long>prefix(string s){

}