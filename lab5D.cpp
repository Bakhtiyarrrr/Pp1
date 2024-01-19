#include <bits/stdc++.h>
using namespace std;
int main () {
    string s;
    cin >> s;
   bool b = true;
    for(int i = 0; i < s.size(); i++) 
    {
       if(s[i] != s[s.size() - 1 -i]) {
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