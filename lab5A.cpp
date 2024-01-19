#include <bits/stdc++.h>
using namespace std;
int main () {
    string s;
    cin >> s;
    int c = 0,k = 0;
    for(int i = 0; i < s.size(); i++) {
        if(s[i] >= 'a' && s[i] <= 'z') {
            c++;
        }
        else if(s[i] >= 'A' && s[i] <= 'Z') {
            k++;
        }
    }
    cout << c << " " << k;
}