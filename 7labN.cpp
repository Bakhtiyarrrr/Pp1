#include <bits/stdc++.h>
using namespace std;
int main () {
    int n,k;
    cin >> n >> k;
    int arr[n];
    vector <int> v(n);
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    for(int i = 0; i < n; i++) {
        v[i].push_back(arr[i]);
    }
    sort(v.begin(), v.end());
   
}