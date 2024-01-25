#include <bits/stdc++.h>
using namespace std;

long long q = 1e15+9;
long long P=31;

void getHash(string &s){
    unordered_map<unsigned long long, bool> mp;
    for(int i=0; i<s.size(); i++){
        long long hash=0;
        long long curP=1;
        for(int j=i; j<s.size(); j++){
            long long curHash=(s[j]-'a'+1)*curP % q;
            hash=(hash+curHash)%q;
            curP=(curP*P)%q;
            if(mp[hash]==0){
                mp[hash]=true;
            }
        }
    }
    cout << mp.size() << endl;
}

int main(){
    string s; 
    cin >> s;
    getHash(s);
}