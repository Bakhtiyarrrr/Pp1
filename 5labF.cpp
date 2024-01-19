#include <bits/stdc++.h>
using namespace std ;
int main () {
    string s;
    cin >> s;
    int l = 0, r=0;
    cin >> l >> r;
    cout << s.substr(l,r-l+1);
}