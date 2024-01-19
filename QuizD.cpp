#include <bits/stdc++.h>
using namespace std;
void hex(int n) {
    if(n < 16) {
       if(n >= 10) {
        cout << char((n - 10) + 'A');
       }
       else {
        cout << n;
       }
    return;
    }
    int k = n % 16;
    n = n / 16;
    hex(n);
    if(k >= 10) {
        cout << char((k - 10) +'A');
    }
    else { 
        cout << k;
    }
}


int main () {
    int n;
     cin >> n;
    hex(n);
}