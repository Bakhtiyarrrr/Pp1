#include <bits/stdc++.h>
using namespace std;
int main () {
    int n, m;
    cin >> n >> m;
    int arr[n][m];
    int sum = 0;
    int pk[n];
   int c = 0;
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < m; j++) {
            cin >> arr[i][j];
        }
    }
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < m; j++) {
         sum = sum + arr[i][j];
        }
        pk[i] = sum;
        sum = 0;
} 
    int min = pk[0];
    for(int i = 0; i < n; i++) {
        if(min >= pk[i]) {
            min = pk[i];
            c++;
        }
    }
    if(min == pk[0]) {
        cout << 1;
    }
    else {
    cout << c;
}
}