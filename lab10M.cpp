#include <bits/stdc++.h>
using namespace std;
int main () {
 int n,m;
 cin >> n >> m;
 vector <pair <int, bool> > v(n);
 vector <pair <int, bool> > d(m);
 for(int i = 0; i < n; i++) {
  cin >> v[i].first;
  v[i].second = true;
 }
for(int i = 0; i < m; i++) {
  cin >> d[i].first;
  d[i].second = true;
}
 for(int i = 0; i < n; i++) {
 if(v[i].first == v[i+1].first) {
  v[i].second = false;
 }
 }

for(int i = 0; i < m; i++) {
 if(d[i].first == d[i+1].first) {
  d[i].second = false;
 }
}
vector <int> fac;
vector <int> to;



 for(int i = 0; i < n; i++) {
  if(v[i].second == true) {
    fac.push_back(v[i].first);
  }
 }
 for(int i = 0; i < m; i++) {
  if(d[i].second == true) {
    to.push_back(d[i].first);
  }
 }


vector <int> a;
for(int i = 0; i < max(fac.size(),to.size()); i++) {
 if(fac[i] != 0) {
  a.push_back(fac[i]);
 }
 if(to[i] != 0) {
  a.push_back(to[i]);
 }
  
}


 auto it = unique(a.begin(), a.end());
 for_each(a.begin(), it, [](int h) {
  cout << h << " ";
 });






}