#include<iostream>
#include<cmath>
#include<vector>
using namespace std;
bool is_prime(int x){
    for(int i=2;i<=sqrt(x);i++){
        if(x%i==0){
            return false;
        }
    }
    return true;
}
int main(){
    int n;
    cin>>n;
    vector<int>primes;
    for(int i=2;i<=1000000;i++){
        if(is_prime(i))
            primes.push_back(i);
    }
    vector<int>index;
    for(int i=1;i<primes.size();i++){
        if(is_prime(i))
            index.push_back(primes[i-1]);
    }
    cout<<index[n];
}