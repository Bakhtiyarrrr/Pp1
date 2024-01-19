#include <bits/stdc++.h>
using namespace std;
int main () {
    string s;
    cin >> s;
    char x;
    int n;
    int c = 0;
    cin >> x >> n;
    for(int i = 0; i < s.size(); i++) {
        if(s[i] == x) {
            c++;
        }
    }
    if(c == n) {
        cout << "YES";

    }
    else{
        cout << "NO";
    }
}
