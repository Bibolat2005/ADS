#include<iostream>
using namespace std;
void bin_search(int a[],int target,int n){
    int left=0;
    int right=n-1;
    while(left<=right){
        int mid=left+(right-left)/2;
        if(a[mid]==target){
            return mid;
        }
        else if(a[mid]>target){
            right=mid-1;
        }
        else{
            left=mid+1;
        }
    }
    return -1;
}