#include <bits/stdc++.h>
using namespace std;

int main()
{
 int n;
 cin >> n;
 vector<string> v(n);
 string t;
int ind = 0;
 for(int i = 0; i < n; i++) {
     cin >> v[i];
 }
 for(int i = 0; i < n; i++) {
     if(v[i].find("@gmail.com") != string :: npos) {
         t = v[i];
     }
 }
     for(int i = 0; i < t.size(); i++) {
         if(t[i] == '@') {
             ind = i;
         }
     }
         t.erase(t.begin() + ind, t.end());
         
         
        
         cout << t;
       
 }
 
   
