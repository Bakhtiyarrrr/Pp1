#include <bits/stdc++.h>
using namespace std;

int main()
{
   int n;
   cin >> n;
   vector <string> v(n);
   map <string, int> m;
   for(int i = 0; i < n; i++) {
       cin >> v[i];
   }
   for(int i = 0; i < n; i++) {
       if(m[v[i]] == 0) {
           cout << "new user added"  << endl;
       }
       else {
           cout << "user already exists" << endl;
       }
       m[v[i]]++;
   }
}