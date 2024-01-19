#include <bits/stdc++.h>
using namespace std;
int main () {
    int n;
    cin >> n;
    int arr[n][n];
    int k = 1,c = 1;
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            cin >> arr[i][j];
        }
    }
    int cnt = arr[0][0];

    for(int i = 0; i < n; i++) {
            if(arr[i][i] > cnt) {
                cnt = arr[i][i];
                k = i + 1;
                c = i + 1;
            }
        
        }
    
    cout << "Maximum element is: " << cnt <<" " << "with coordinates: " << k <<";"<<c;
   
}