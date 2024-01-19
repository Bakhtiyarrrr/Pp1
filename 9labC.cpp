#include <bits/stdc++.h>
using namespace std;
int main () {
    long long n;
    cin >> n;
    vector<long long> v(n);
   long long c = 0;
   for(int i = 0; i < n; i++) {
       cin >> v[i];
   }
      long long count[1000001];
     for(int i = 0; i < 1000001; i++) {
         count[i] = 0;
     }
     
      for(int i = 0; i < n; i++) {
          count[v[i]]++;
      }
      for(int i = 0; i < 1000001; i++) {
          if(count[i] >= 2) {
              c++;
          }
      }
      cout << c;
}
