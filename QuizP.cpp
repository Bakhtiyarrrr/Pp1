#include <bits/stdc++.h>
using namespace std;
void str(string s) {
    if(s.size() -1 <= 1) {
        for(int i = 0; i < s.size(); i++) {
        if(s[i] == '1') {
            cout << "true";
        }
        else if(s[i] == '0') {
            cout << "false";
        }
    }
}
else {
    cout << s;
}
}




int main () {
    string s;
    cin >> s;
    str(s);
}