#include <bits/stdc++.h>
using namespace std;
int main () {
    int n;
    cin >> n;
   int arr[n];
   int c;
   for(int i = 0; i < n; i++) {
       cin >> arr[i];
    
   }
    for(int i = 0; i < n; i++) {
    if(arr[i] == arr[i + 1]) {
        
        c++;
    }
    }
   if(c > 0) {
    cout << "YES";
   }
   else if(c == 0) {
    cout << "NO";
   }
   
}
        
