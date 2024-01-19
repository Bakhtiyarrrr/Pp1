#include <bits/stdc++.h>
using namespace std;
long double hyp(int a, int b) {
    double c = sqrt(a*a + b*b);
    return c;
}
int main () {
    int a,b;
    cin >> a >> b;
    cout << setprecision(4) << hyp(a,b);
}