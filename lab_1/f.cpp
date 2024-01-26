#include<iostream>
using namespace std;
bool is_prime(int n){
    if(n<2)
        return false;
    for(int i=2;i<n;i++){
        if(n % i==0){
            return false;
        }
    }
    return true;
}
int nth_prime(int num){
    int count=0;
    int prime_count=0;
    while(num){
        if(is_prime(count)){
            prime_count++;
        }
        if(prime_count==num){
            break;
        }
        count++;
    }
    return count;
}




int main(){
    int n;
    cin>>n;
    cout<<nth_prime(n);
    return 0;
}