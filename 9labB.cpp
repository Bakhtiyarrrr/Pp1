#include <bits/stdc++.h>
using namespace std;
int main () {
    int n;
    cin >> n;
    vector<int> v(n);
   for(int i = 0; i < n; i++) {
       cin >> v[i];
   }
   sort(v.begin(),v.end());
   for(int i = n - 1; i >= 0; i-- )
      if(v[i] % 2 == 0) {
          cout << v[i] << " ";
      }
      for(int i = 0; i < n; i++) {
          if(v[i] % 2 != 0) {
              cout << v[i] << " ";
          }
      }
}