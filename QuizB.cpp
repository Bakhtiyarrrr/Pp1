#include <bits/stdc++.h>
using namespace std;
int main () {
    char t;
    cin >> t;
    string s;
    cin >> s;
   vector <char> v;
    for(int i = 0; i < s.size(); i++) {
        if(s[i] != t) {
         v.push_back(s[i]);
        }
    }
    for(auto now : v) {
        cout << now;
    }

    
}