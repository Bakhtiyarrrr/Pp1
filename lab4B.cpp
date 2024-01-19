#include <bits/stdc++.h>
using namespace std;
int main () {
  int n;
    cin >> n;
    int arr[n][n];
    int cnt=0;
    for(int i = 0; i < n ;i++) {
        for(int j = 0; j < n; j++) {
            cin >> arr[i][j];
        } }
        int max = arr[0][0];
        int max2 = arr[0][0];
        for(int i = 0; i < n ;i++) {
            for(int j = 0; j < n; j++) {
                if(arr[i][j] > max) {  
                    max = arr[i][j];
                }
            }
        }
        for(int i = 0; i < n ;i++) {
            for(int j = 0; j < n; j++) {
                if(arr[i][j] > max2 && arr[i][j] != max) {  
                    max2 = arr[i][j];
                }
                
            }
        }
        if(arr[0][0] == max){
               cout<<0;     
        }
        else{
            cout << max2; 
        }

        return 0;
        }
      


        