
#include <bits/stdc++.h>

using namespace std;
int natural(int n, int a) {
    if(a > n) {
        return 0;
    }
    cout << a << " ";
     a++;
    return natural(n,a);
}
int main()
{
    int n;
    cin >> n;
   int a = 1;
    natural(n,a);

   

    return 0;
}