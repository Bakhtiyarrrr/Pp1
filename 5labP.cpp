#include <bits/stdc++.h> 
using namespace std;
int main () {
    string s;
    cin >> s;
    for(int i = 0; i < s.size () ; i++) {
       s[i] = s[i] + 1;
       if(s[i] == '{') {
        s[i] = 'a';
       }
       
       
    }
    for(int i = 0; i < s.size () ; i++) {
        cout << s[i];
    }

}