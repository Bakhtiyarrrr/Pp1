#include <bits/stdc++.h>
using namespace  std;
int main () {
    int n;
    cin >> n;
    bool isPrime = true;
    for(int i = 2; i < n; i++) {
        isPrime = true;
        for (int j = 2; j <=i/2; j++)
        {
            if(i%j==0){
                isPrime = false;
                break;
            }
        }
        if(isPrime){
            cout<<i<<" is prime"<<endl;
        }
    }
    return 0;
}