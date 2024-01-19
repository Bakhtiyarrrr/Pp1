#include <bits/stdc++.h>
using namespace std;
int main () {
    int n;
    cin >> n;
    int j = 0;
  map <string,double> m;
    while(j != n) {
    int p;
    cin >> p;
     for(int i = 0; i < p; i++) {
        string s;
        cin >> s;
        double k;
        cin >> k;
        m[s] += k;
     }
     j++;
    }
     double sum = 0;
    for(auto x : m) {
        sum += x.second;
    }
    for(auto x : m) {
        m[x.first] =double((m[x.first] * 100) / sum);
    }
    for(auto x : m) {
        cout << x.first << " " << x.second << endl;
    }
}