#include <bits/stdc++.h>

using namespace std;

int main()
{
 string s;
 cin >> s;
 bool m = true;
int j = 0;
 while(s.size() > 1) {
     for(int i = 0; i <s.size(); i++) {
         if(s[i] != s[s.size() - 1 - i]) {
             m = false;
         }
     }
     if(m == false) {
         cout << s.size();
         break;
     }
     else {
         s.pop_back();
         j++;
         if(s.size() == 2) {
             cout << 0;
         }
     }
 }
       
 }
 
   
