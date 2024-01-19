#include <bits/stdc++.h>
using namespace std;
int arr(int a[],int b) {
   for(int i = 0; i < b; i++) {
      cin >> a[i];
   }
   return a[b];
}
int main() {
   int n;
  cin >> n;
  int a[n],b[n];
  vector<int> v;
  arr(a,n);
  arr(b,n);
  for(int i = 0; i < n; i++) { 
     v.push_back(abs(a[i]-b[i]));
   }

  
  for(auto now : v) {
   cout << now << " ";
  }
}