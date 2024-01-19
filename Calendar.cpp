#include <bits/stdc++.h>
using namespace std;
int main() {
  int n;
  cin >> n;
 
  vector <pair <int, string>> v;
 while(n > 0) {
    string s;
    cin >> s;
    int d = (s[0] - '0') * 10 + (s[1] - '0');
    int c = ((s[3] - '0') * 10 + (s[4] - '0')) * 31;
    int h = ((((s[6] - '0') * 10 + (s[7] - '0')) * 100) + (((s[8] - '0') * 10) + (s[9] - '0')) )* 365;
    v.push_back(make_pair(d + c + h, s));

    n--;
 }
 sort(v.begin(),v.end());
for(auto x : v) {
    cout << x.second << endl;
}
}