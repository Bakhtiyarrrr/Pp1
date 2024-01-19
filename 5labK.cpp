#include <bits/stdc++.h>
using namespace std;
int main () {
    string s = "aeiuo";
    string t;
    cin >> t;
   int c = 0;
    for(int i = 0; i < t.size(); i++) {
        if(t[i] == 'a' || t[i] == 'e' || t[i] == 'i' || t[i] == 'u'|| t[i] == 'o') {
            c++;
        }
    }
    cout << c;
}