#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
    int n;
    cin>>n;
    vector<int>v(n);
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    sort(v.begin(),v.end());


    int t;
    cin>>t;
    while(t--){
        int x;
        cin>>x;
        int left=0;
        int right=v.size()-1;
        int sum=0;
        int cnt=0;
        while(left<=right){
            int mid=left+(right-left)/2;
            if(v[mid]<=x){
                left=mid+1;
            }
            else{
                right=mid-1;
            }
        }
        for(int i=0;i<left;i++){
            sum+=v[i];
            cnt++;
        }
        cout<<cnt<<" "<<sum<<endl;
    }
    return 0;
}