#include <bits/stdc++.h>
using namespace std;
int main () {
    string s;
    cin >> s;
    int c = 0;
    set <int> p;
    sort(s.begin(),s.end());
    for(int i = 0; i < s.size();i++) {
        p.insert(s[i]);
    }
    
    for(int i = 0; i < s.size();i++) {
        if( s.size() % 2 == 0) {
             if(s[i] == s[i + 1]) {
            c++;
        } 
    } }
    double k = s.size()/2;
    int l = p.size();
    if( c == s.size() - l) {
        cout << "YES";
    }
    else {
        cout << "NO";
    }
}