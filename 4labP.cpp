#include <bits/stdc++.h>
using namespace std;
int main () {
    int n;
    cin >> n;
    int arr[n][n];
    int k ,c = 0;
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            cin >> arr[i][j];
        }
    }
   

    for(int i = 0; i < n; i++) {
            k = n - i -1;
            c += arr[i][k];
        
        }
    cout << c;
 
   
}