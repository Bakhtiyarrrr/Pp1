#include <bits/stdc++.h>
using namespace std;
int main()
{   int n;
    cin >> n;
    int c = 0;
 vector<string> s(n);
  map<string, int> m;
   for(int i = 0; i < n; i++) {
       cin >> s[i];
   }
   for(int i = 0; i < n; i++) {
       m[s[i]]++;
   }
 
   for(auto now : m) {
       if(now.second == 3) {
           c++;
       }
   }
   
   

   cout << c;
   
   
 
    
    return 0;
}