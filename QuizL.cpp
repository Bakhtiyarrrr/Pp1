#include <bits/stdc++.h>
using namespace std;
int main () {
    string s;
    getline(cin,s);
    for(int i = 0; i < s.size(); i++) {
      if(s[i] >= 'a' && s[i] <= 'z') {
       s[i] = s[i] + 1;
    }
    }
    for(int i = 0; i < s.size(); i++) {
       if(s[i] == '{') {
         s[i] = s[i] - 26; 
    }
    }
    cout << s;
}
