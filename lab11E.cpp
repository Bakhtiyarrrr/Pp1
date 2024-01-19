#include <bits/stdc++.h>

using namespace std;

int main()
{
  int n;
  cin >> n;
 vector <string> v(n);
 for(int i = 0; i < n; i++) {
     cin >> v[i];
     
 }
 
 vector < pair < char,bool>> cube;
 for(int i = 0; i < n - 1; i++) {
     for(char ch : v[i]) {
         if(v[i + 1].find(ch) != string :: npos) {
             cube.push_back(make_pair(ch,true));
           
         }
     }
 }
 sort(cube.begin(),cube.end());
 for(int i = 0; i < cube.size(); i++) {
     for(int j = i + 1; j < cube.size(); j++) {
         if(cube[i].first == cube[j].first) {
             cube[i].second = false;
             cube[j].second = false;
         }
     }
 }
 map <char, int> m;
 for(int i = 0; i < cube.size(); i++) {
     if(cube[i].second == false) {
         m[cube[i].first]++;
     }
 }
 
 for(auto x : m) {
     if(v[n-1].find(x.first) != string :: npos) {
        m[x.first]++;
     }
 }
 
 
 
 bool f = true;
for(auto x : m) {
    if(x.second >= n) {
        f = false;
        cout << x.first << " ";
    }
}
 if(f == true) {
     cout << "NO COMMON CHARACTERS";
 }
}