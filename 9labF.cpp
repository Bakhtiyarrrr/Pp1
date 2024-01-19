#include <bits/stdc++.h>
using namespace std;
int main () {
    string s;
    cin >> s;
    bool k = true;
    for(int i = 0; i < s.size(); i++) {
        if(s[i] == s[s.size()-1 - i]) {
            k = false;
        }
    }
    if(k == false) {
        cout << "NO";
    }
    else {
        cout << "YES";
    }
}