#include <bits/stdc++.h>
using namespace std;
string remove(string s) {
   string t;
    for(int i = 0; i < s.length(); i++) {
        if(s[i] != 'a' 
        && s[i] != 'e'
        && s[i] != 'i' 
        && s[i] != 'o' 
        && s[i] != 'u' 
        && s[i] != 'A'
        && s[i] != 'E'
        && s[i] != 'I'
        && s[i] != 'O'
        && s[i] != 'U'
        ) 
        {
            t.push_back(s[i]);
        }
    }

    
    return t;
}
int main () {
    string s;
    getline(cin,s);
    
    string t = remove(s);
    cout << t;
}