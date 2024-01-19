#include <bits/stdc++.h> 
using namespace std;
int main () {
  
    int n;
    cin >> n;
    vector < pair <int, int>> v(n);
   map <int,int> m;
    for(int i = 0; i < n; i++) {
        cin >> v[i].first;
        cin >> v[i].second;
    }
    int counter = 0;
    for(int i = n - 1; i >= 0; i--) {
       if(v[i].first == v[i - 1].second && v[i].second == v[i - 1].first) {
        m[1]++;
       }
        else {
            m[0] = 0;
        }
    }
    for(auto x : m) {
        cout << x.second << endl; 
    }
}
