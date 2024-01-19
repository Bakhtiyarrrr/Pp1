#include <bits/stdc++.h>

using namespace std;


int main () {
   int n;
   cin >> n;
vector<int> x;
while(n != 0) {
       x.push_back(n % 2);
       n = n / 2;
       
   }
   reverse(x.begin(),x.end());
   for(auto now : x) {
       cout << now;
   }
}