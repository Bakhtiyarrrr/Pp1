
#include <bits/stdc++.h>

using namespace std;
string even(string s) {
    for(int i = 0; i < s.size(); i++) {
        if(i % 2 == 0 && 'a' <= s[i] && 'z' >= s[i]) {
             s[i] = s[i] - 32;
        }
    }
    return s;
}

int main()
{
    string s;
    cin >> s;
    cout <<even(s);

    return 0;
}