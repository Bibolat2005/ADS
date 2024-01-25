#include<iostream>
#include<vector>
using namespace std;
int p=31;
int q=1e9+7;
int size;
vector<string>table;
vector<string>values;
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
 int hashFunction(string key) {
        int hash = 0;
        for (char ch : key) {
            hash += ch;
        }
        return hash ;
    }

    
void f(string s){
    for(int i=0;i<s.size();i++){
        cout<<s.substr(0,i+1)<<endl;
    }
}
void insert(string s,string value){
    int index=hashFunction(s);
    for(int i=0;i<table[index].size();i++){
        if (tableKeys[index][i] == key) {
                tableValues[index][i] = value;
                return;
        }
    }
        table[index].push_back(s);
        values[index].push_back(value);
}

void coutTable() {
        for (int i = 0; i < size; i++) {
            cout<< i << " ";
            for (int j = 0; j < table[i].size(); j++) {
                cout << "(" << table[i][j] << ", " << table[i][j] << ") ";
            }
            cout << endl;
        }
    }
int main(){
    string s;
    cin>>s;
    cin>>size;
    
}