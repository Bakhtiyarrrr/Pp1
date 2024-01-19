#include <bits/stdc++.h>
using namespace std;
int main () {
    string s;
    string t;
    cin >> s >> t;
   bool b = true;
    for(int i = 0; i < s.size(); i++) 
    {
       if(s[i] != t[i]) {
             b = false;
        }
    }
   if(b != false){
    cout << "YES";
   }
    else { 
        cout << "NO";
   }
}