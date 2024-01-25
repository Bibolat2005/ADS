#include <iostream>
#include<vector>
#include<algorithm>

using namespace std;

int binary_search(int a[], int target, int n){
    int left = 0, right = n - 1;
  while (left <= right){
    int mid = left + (right - left) / 2;
    if (a[mid] >= target) right = mid - 1;
    else left = mid + 1;
  }
  return left;
}

int main(){
    int n, k;
    cin >> n >> k;
    vector<int> v;
    for(int i = 0; i < n; i++){
        int x;
        cin >> x; 
        v.push_back(x);
    }
    int res[n];
    res[0] = v[0];
    for(int i = 1; i < v.size(); i++){
        res[i] = v[i] + res[i - 1]; 
    }
    for(int j = 0; j < k; j++){
        int y;
        cin >> y;
        cout << binary_search(res, y, n) + 1 << "\n";
    }
}

/*
#include <iostream>
#include <vector>

using namespace std;

int binarySearch(vector <int>& arr, int target) {
    int l = 1, r = arr.size();
    while(l <= r) {
        int mid = l + (r - l) / 2;
        if(arr[mid] < target) {
            l = mid + 1;
        } else {
            r = mid - 1;
        }
    }
    return l;
}

int main() {
    int n, m;
    cin >> n >> m;
    vector <int> a(n), p(n);
    for(int i = 1; i <= n; i++) {
        cin >> a[i];
    }
    for(int i = 1; i <= n; i++) {
        if(i == 1) {
            p[i] = a[i];
        } else {
            p[i] = p[i - 1] + a[i];
        }
    }

    while(m--) {
        int x;
        cin >> x;
        cout << binarySearch(p, x) << "\n";
    }

    return 0;
}

*/