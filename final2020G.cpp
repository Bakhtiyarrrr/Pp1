#include <bits/stdc++.h>

using namespace std;
bool prime(int n) {
    bool m = true;
    for(int i = 2; i <= sqrt(n); i++) {
        if(n % i == 0) {
            m = false;
            break;
        }
    }
    return m;
}





int main()
{
   int n;
   cin >> n;
 bool g = false;
  int i = 2;
  
   while(g != true) {
       int k = n - i;
       if(prime(k) == true && prime(i) == true) {
          cout << i << " " << k;
           g = true;
           
       }
       i++;
       //continue;
   }

    return 0;
}