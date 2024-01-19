#include <bits/stdc++.h>
using namespace std;
int main () {
    int n;
    cin >> n;
    int arr[n];
    vector<int> v; 
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    int count[1001];
    for(int i = 0; i < 1001; i++) {
        count[i] = 0;
    }
    for(int i = 0; i < n; i++) {
        count[arr[i]]++;
    }
    int max = -1;
    for(int i = 0; i < 1001; i++) {
        if(count[i] > max) {
         max = count[i];
        }
    }
    for(int i = 0; i < 1001; i++) {
        if(count[i] == max) {
            v.push_back(i);
        }
    }
    for(int i = v.size() - 1; i >= 0; i--) {
       cout << v[i] << " ";
    }

}
