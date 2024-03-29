#include <bits/stdc++.h>
using namespace std;
const long long D=256, MOD = 1e9, P = 31, N = 1e5;
int a[N];

string find(vector<string> s){
    string m="";
    int max=0, l;
    long long hash1=0, curP = 1;
    a[N]={0};
    for(int i=0; i<s[1].size(); i++){
        long long hash =0;
        hash1 = (s[1][i]-'a'+1)*curP%MOD; 
        long long p_pow=1;
        for(int j=s[0].size()-1; j>=0; j--){
            hash=(s[0][j] - 'a' + 1)*p_pow%MOD;
            if(hash==hash1) a[j+1]=a[j]+1; 
            else a[j+1]=0;
            if(a[j+1]>max){
                max=a[j+1];
                l=j-max+1;
            }
        }
    }
    if(max==0)return "";
    return s[0].substr(l, max);
}

int main(){
    int n; cin>>n;
    string str, s1; cin>>str;
    for(int i=0; i<n-1; i++){
        cin>>s1;
        vector<string> s;
        s.push_back(str); s.push_back(s1);
        str = find(s);
    }
    cout<<str;
}