#include <bits/stdc++.h>
using namespace std;

int main () {
  int  n;
  cin >> n;
  vector <int> v(n);
for(int i = 0; i < n; i++) {
    cin >> v[i];
}
vector <int> t;
for(int i = 0; i < n; i++) {
    for(int j = i + 1; j < n; j++) {
        t.push_back(v[i] + v[j]);
    }
}
int  max_sum = - 1;
for(int i = 0; i < t.size(); i++) {
    if(t[i] > max_sum) {
        max_sum = t[i];
    }
}
int  count = 0;
for(int i = 0; i < t.size(); i++) {
   if(max_sum == t[i]) {
    count++;
   }
}
cout << max_sum << " " << count;
cout << endl;
for(auto x : t) {
    cout << x << " ";
}
 }
