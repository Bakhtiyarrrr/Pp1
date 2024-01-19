#include <bits/stdc++.h>
using namespace std;
int main () {
    int n,m;
    cin >> n >> m;
    int arr[n][m];
    int pk[m], k = 1, c=1;
    int sum = 0;
    for(int i = 0;i < n; i++) {
        for(int j = 0; j < m; j++) {
            cin >> arr[i][j];
        }
    }
    int min = arr[0][0];
    cout << "coordinates of min elements: " << endl;; 
    for(int j = 0; j < m; j++) {
       int min = 10000;
        for(int i = 0; i < n; i++) {
            if(arr[i][j] <  min) {
                min = arr[i][j];
                k = i + 1;
                c = j + 1;
            }
}
     pk[j] = min;

     cout << k << ";"<< c << endl;
    }
     cout << endl << "Their sum:" << endl;
    for(int r = 0; r < m; r++) {
        sum = sum + pk[r];
    }
    
    cout << sum;
    }
