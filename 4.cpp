#include <bits/stdc++.h>
using namespace std;
int main() {
   string s;
   cin >> s;
   vector <char> v;
   for(int i = 0; i < s.size(); i++) {
   v.push_back(s[i]);
   }
   int j = 0;
   while(j ) {
    for(int i = v.size() - 1; i >= 0; i--) {
        int d = (v[v.size() - 2] -'0') * 10 + (v[v.size() - 1] - '0');
        if(double(sqrt(d)) == int(sqrt(d))) {
            v.pop_back();
            v.pop_back();
            break;
        }
        else {
            i++;
            continue;
        }
        
    }
    j++;
   }
   for(auto x : v) {
    cout << x << " ";
   }
    
}