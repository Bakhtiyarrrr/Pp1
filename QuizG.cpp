#include <bits/stdc++.h>
using namespace std;
int main () {
    string s;
    getline(cin,s);
   map<char, int> m;
   int n;
   cin >> n;
   vector <char> v(n);
   for(int i = 0; i < n; i++) {
       cin >> v[i];
   }
   for(int i = 0; i < n; i++) {
       m.insert(make_pair(v[i],0));
   }
   
   
   
   for(int i = 0; i < s.size(); i++) {
       m[s[i]]++;
   }
   for(auto now : m) {
       for(int i = 0; i < n; i++) {
       if(now.first == v[i]) {
           cout << now.first << " - " << now.second << endl;
       }
   }
  
}
}