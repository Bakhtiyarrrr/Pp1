#include <bits/stdc++.h>
using namespace std;
int main() {
  int n;
  cin >> n;
  int i = 1;
  int j = 0;
  while(n >= i) {
    while(j < i) {
        cout << i << " ";
        j++;
    }
    i++;
    j = 0;

  }
}