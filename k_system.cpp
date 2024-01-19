#include <iostream>
using namespace std;
void k_system(int a, int b) {
    if(a < b){
        if(a >= 10) cout << char((a - 10) + 'A');
        else cout << a;
        return;
    }
    
    int k = a % b;
    k_system(a / b, b);
    if(k >= 10) cout << char((k - 10) + 'A');
    else cout << k;
}




int main() {
  int n,k;
  cin >> n >> k;
  k_system(n,k);
  
    return 0;
}