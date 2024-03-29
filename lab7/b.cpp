#include <iostream>
#include <vector>

using namespace std;

vector <int> merge(vector <int> left, vector <int> right) {
    vector <int> result;
    int l = 0, r = 0;
    while(l < left.size() && r < right.size()) {
        if(left[l] < right[r]) {
            result.push_back(left[l]);
            l++;
        } else {
            result.push_back(right[r]);
            r++;
        }
    }
    while(l < left.size()) {
        result.push_back(left[l]);
        l++;
    }
    while(r < right.size()) {
        result.push_back(right[r]);
        r++;
    }

    return result;
}

int main() {
    int n; cin >> n;
    vector <int> v1(n);
    for(int i = 0; i < n; i++) {
        cin >> v1[i];
    }

    int m; cin >> m;
    vector <int> v2(m);
    for(int i = 0; i < m; i++) {
        cin >> v2[i];
    }

    vector <int> result = merge(v1, v2);
    for(int i = 0; i < result.size(); i++) {
        cout << result[i] << " ";
    }
    cout << "\n";

    return 0;
}


/*
#include<bits/stdc++.h>

using namespace std;

vector<int> merge(vector<int> &left, vector<int> &right) {
	vector<int> result;
	int l = 0, r = 0;
	while (l < left.size() && r < right.size()) {
		if (left[l] <= right[r]) {
			result.push_back(left[l]);
			l++;
		} else {
			result.push_back(right[r]);
			r++;
		}
	}
	while (l < left.size()) {
		result.push_back(left[l]);
		l++;
	}
	while (r < right.size()) {
		result.push_back(right[r]);
		r++;
	}
	return result;
}

int main() {
	int n;
	cin >> n;
	vector<int> v(n);
	for (int i = 0; i < n; i++){
        cin >> v[i];
    }
	int m;
	cin >> m;
	vector<int> w(m);
	for (int i = 0; i < m; i++){
        cin >> w[i];
    }

	vector<int> res = merge(v, w);
	for (auto i : res) cout << i << " ";
}
*/