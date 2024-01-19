


#include <bits/stdc++.h>

using namespace std;
vector <long long> b;

void beka(long long n) {
    long long j  = 1;
   while(j <= n) {
      long long k = j;
       for(long long i = 1; i < j; i++) {
           k = (i*0) + j * k;
       }
       b.push_back(k);
       j++;
   }
}






int main()
{
    long long n;
    cin >> n;
    beka(n);
    cout << 1 << " ";
    for(auto now : b) {
        cout << now << " ";
    }
  
    return 0;
}