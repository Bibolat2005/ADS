#include<iostream>
#include<cmath>
#include<algorithm>
using namespace std;
void binary_search(int arr[],int left,int right){
    if(left<=right){
        int mid=left+(right-left)/2;
        cout<<arr[mid]<<" ";
        binary_search(arr,mid+1,right);
        binary_search(arr,left,mid-1);
    }
}

int main(){
    int n;
    cin>>n;
    int size=pow(2,n)-1;
    int arr[size];
    for(int i=0;i<size;i++){
        cin>>arr[i];
    }
    sort(arr,arr+size);
    binary_search(arr,0,size-1);
    return 0;

}