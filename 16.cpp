#include <bits/stdc++.h>

using namespace std;

int main() {
   int n;
   cin >> n;
   int m;
   cin >> m;
   vector <vector <int>> v;
   int j = 0;
   int l = 0;
   while(j != n) {
    vector <int> t;
    while(l != m) {
      int k;
      cin >> k;
      t.push_back(k);
      l++;
    }
    reverse(t.begin(),t.end());
    v.push_back(t);
    j++;
    l = 0;
    

   }
   for(int i = 0; i < n; i++) {
    for(int j = 0; j < m; j++) {
      cout << v[i][j] << " ";
    }
    cout << endl;
   }
}