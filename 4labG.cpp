#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >> n;
    string arr[n][n];
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            if(j == n - i - 1) {
                cout << i + 1;
            }
            else  {
                cout << '.';
            }
          
        }
        cout << endl;
    }
  
   for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            cout << arr[i][j];
        }
      cout << endl;

}
}