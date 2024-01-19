#include <bits/stdc++.h>
using namespace std;
int main () {
    int n,k;
    cin >> n >> k;
    int arr[n][k];
    double p = 0;
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < k; j++) {
            cin >> arr[i][j];
        }
    }
    
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < k; j++) {
            p = sqrt(arr[i][j]);
            if(p - floor(p) == 0) {
                arr[i][j] = p;

            }
        }
    }

    for(int i = 0; i < n; i++) {
        for(int j = 0; j < k; j++) {
            cout << arr[i][j] << " ";
        }
    cout << endl;
}
}