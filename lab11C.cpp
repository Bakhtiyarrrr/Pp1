
#include <bits/stdc++.h>

using namespace std;

int main()
{
  int n;
  cin >> n;
  vector <pair <string,double>> v(n);
 map <string,double> m;
 
 double sum = 0;
  for(int i = 0; i < n; i++) {
    cin >> v[i].first;
    cin >> v[i].second;
     sum = sum + v[i].second;
  }
  for(int i  = 0; i < n; i++) {
    m[v[i].first] = m[v[i].first] + v[i].second;
  }


for(auto x : m) {
  m[x.first] = (x.second * 100.0)/ sum;
}

 vector < pair <double, string>> l;
 for(auto x : m) {
  l.push_back(make_pair(x.second,x.first));

 }
 sort(l.begin(), l.end());
 reverse(l.begin(), l.end());
 for(auto x : l) {
  cout << x.second << " " << x.first << '%' << endl;
 }

  



  

}