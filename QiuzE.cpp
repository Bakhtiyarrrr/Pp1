#include <bits/stdc++.h>
using namespace std;
int main () {
    string s;
    cin >> s;
    vector <char> t;
    for(int i = 0; i < s.size(); i++) {
        if(s[i] >= '0' && s[i] <= '9') {
            t.push_back(s[i]);
        }
        
    }
    int sum = 0;
    for(int i = 0; i < t.size(); i++) {
        sum = sum + t[i] - '0';
    
    
}
cout << sum;
}